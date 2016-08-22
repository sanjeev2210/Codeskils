#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left, *right;
};
struct node *newNode(int item)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->data = item;
	temp->left =NULL;
	temp->right = NULL;
	return temp;
}
void inorder(struct node *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}
struct node* insert(struct node* node, int key)
{

	if (node == NULL) return newNode(key);


	if (key < node->data)
		node->left = insert(node->left, key);
	else
		node->right = insert(node->right, key);


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

	if (root == NULL) return root;


	if (key < root->data)
		root->left = deleteNode(root->left, key);


	else if (key > root->data)
		root->right = deleteNode(root->right, key);


	else
	{  
	
		if (root->left == NULL)
		{
			struct node *temp = root->right;
			free(root);
			return temp;                              //it handles both the cases of one child and no chilld
		}
		else if (root->right == NULL)
		{
			struct node *temp = root->left;
			free(root);
			return temp;
		}

	
		struct node* temp = minValueNode(root->right);

		
		root->data = temp->data;

	
		root->right = deleteNode(root->right, temp->data);
	}
	return root;
}


int main()
{
int del;

	struct node *root = NULL;
    int n,i,p;
     printf("enter the number of elements in the tree\n");
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element\n");
		scanf("%d",&p);
		root=insert(root,p);
	 } 

	printf("Inorder traversal of the given tree \n");
	inorder(root);
	printf("\nenter the element to be deleted\n");
	scanf("%d",&del);
	root = deleteNode(root, del);
	printf("Inorder traversal of the modified tree \n");
	inorder(root);

	

	return 0;
}
