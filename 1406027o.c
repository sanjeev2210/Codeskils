#include<stdio.h>
#include<stdlib.h>
int m=0,q=0;
struct node
{
    int key;
    struct node *left;
    struct node *right;
    int height;
};
int max(int a, int b);
int height(struct node *N)
{
    if (N == NULL)
        return 0;
    else
   		 return N->height;
}
int max(int a, int b)
{
    return (a > b)? a : b;
}
struct node* newNode(int key)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->key = key;
    node->left = NULL;
    node->right= NULL;
    node->height= 1; 
    return(node);
}
struct node *RightRotation(struct node *y)
{
    struct node *x = y->left;
    struct node *T2 = x->right;
 
    // Perform rotation
    x->right = y;
    y->left = T2;
 
    // Update heights
    y->height = max(height(y->left), height(y->right))+1;
    x->height = max(height(x->left), height(x->right))+1;
 
    // Return new root
    m++;
    return x;
}
struct node *LeftRotation(struct node *x)
{
    struct node *y = x->right;
    struct node *T2 = y->left;
 
    // Perform rotation
    y->left = x;
    x->right = T2;
 
    //  Update heights
    x->height = max(height(x->left), height(x->right))+1;
    y->height = max(height(y->left), height(y->right))+1;
 
    // Return new root
    q++;
    return y;
}
int getBalance(struct node *N)
{
    if (N == NULL)
        return 0;
    else 
    return height(N->left) - height(N->right);
}
 
struct node* insert(struct node* node, int key)
{
    if (node == NULL)
        return(newNode(key));
    else
 {
    if (key < node->key)
        node->left  = insert(node->left, key);
    else
        node->right = insert(node->right, key);
}
    node->height = max(height(node->left), height(node->right)) + 1;
    int balance = getBalance(node);
    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return RightRotation(node);
 
    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return LeftRotation(node);
 
    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
        node->left =  LeftRotation(node->left);
        return RightRotation(node);
    }
 
    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
        node->right = RightRotation(node->right);
        return LeftRotation(node);
    }
    return node;
}
struct node * minValueNode(struct node* node)
{
    struct node* current = node;
    while (current->left != NULL)
        current = current->left;
 
    return current;
}
struct node* deleteNode(struct node* root, int key)
{
 
    if (root == NULL)
        return root;
    if ( key < root->key )
        {
		root->left = deleteNode(root->left, key);
	}
    else if( key > root->key )
       {
		 root->right = deleteNode(root->right, key);
	}
    else
    {
        // node with only one child or no child
        if( (root->left == NULL) || (root->right == NULL) )
        {
            struct node *temp = root->left ? root->left : root->right;
 
            // No child case
            if(temp == NULL)
            {
                temp = root;
                root = NULL;
            }
            else // One child case
             *root = *temp;
              free(temp);
        }
        else
        {
            struct node* temp = minValueNode(root->right);
 
            // Copy the inorder successor's data to this node
            root->key = temp->key;
            root->right = deleteNode(root->right, temp->key);
        }
    }
 
    // If the tree had only one node then return
    if (root == NULL)
      return root;
    root->height = max(height(root->left), height(root->right)) + 1;
    int balance = getBalance(root);
    if (balance > 1 && getBalance(root->left) >= 0)
        return RightRotation(root);
    if (balance > 1 && getBalance(root->left) < 0)
    {
        root->left =  LeftRotation(root->left);
        return RightRotation(root);
    }
    if (balance < -1 && getBalance(root->right) <= 0)
        return LeftRotation(root);
    if (balance < -1 && getBalance(root->right) > 0)
    {
        root->right = RightRotation(root->right);
        return LeftRotation(root);
    }
    return root;
}
 
void inOrder(struct node *root)
{
    if(root != NULL)
    {
       
        inOrder(root->left);
         printf("%d<%x>\t", root->key,root);
        inOrder(root->right);
    }
}
int main()
{	int k,n,i,ch;
  struct node *root = NULL;
  	while(1)
	{
		printf("\n\nMenu of AVL TREE\n");
		printf("1. Insert OPERATION..\n");
		printf("2. perform INORDER TRAVERSAL\n");
		printf("3. Delete Operation..\n");
		printf("4.No of Left and Right Rotation..\n");
		printf("5 . Exit.\n\n");
		printf("Enter ur choice :");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
  			printf("\nHow many no. u want to insert:");
			scanf("%d",&k);
			for(i=0;i<k;i++)
			{
			printf("Enter the value:");
			scanf("%d",&n);
			root=insert(root,n);
			}
			break;
		case 2:
 		 printf("\nInorder traversal of the constructed AVL tree is \n");
 		 inOrder(root);
 		 break;
 		case 3:
 			printf("\nEnter the No. of element to be deleted:");
 			scanf("%d",&k);
 			for(i=0;i<k;i++)
 			{
 				printf("\nEnter the element to be deleted:");
 				scanf("%d",&n);
 				root=deleteNode(root,n);
 			}
 		 	break;
 		case 4:
 			printf("No. of Left Rotation=%d\n\nNo. of Right rotation=%d\n",q,m);
 			break;
 		case 5:
		exit(0);
	default:
		printf("INVALID CHOICE");
}
}
  return 0;
}

