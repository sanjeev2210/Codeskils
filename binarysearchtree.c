 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{																																																																																																																																																																																																																									struct node *lchild;
	int data;
	struct node *rchild;
};
struct node *succ(struct node **ptr)
{
	struct node *ptr2;
	ptr2=(*ptr)->rchild;
				if(ptr2!=NULL)
				{
					while(ptr2->lchild!=NULL)
					{
						ptr2=ptr2->lchild;
					}
				}
				return ptr2;
	
}
void AddNode(struct node **root)
{
	int n;
	printf("Enter the value:");
	scanf("%d",&n);
	struct node *ptr,*ptr1,*tmp;
	ptr=(*root);
	if(*root==NULL)
	{
		tmp=(struct node *)malloc(sizeof(struct node));
		tmp->data=n;
		tmp->lchild=NULL;
		tmp->rchild=NULL;
		*root=tmp;
	}
	else
	{
		while(ptr!=NULL)
		{
		if(ptr->data==n)
		{
			printf("Already present\n");
			exit(0);
		}
		else
		{
			if(ptr->data>n)
			{
				ptr1=ptr;
				ptr=ptr->lchild;
			}
			else
			{
				ptr1=ptr;
				ptr=ptr->rchild;
			}
		}
	}
	if(ptr==NULL)
	{
		tmp=(struct node *)malloc(sizeof(struct node));
		tmp->data=n;
		tmp->lchild=NULL;
		tmp->rchild=NULL;
		if(ptr1->data<n)
		{
			ptr1->rchild=tmp;
		}
		else
		{
			ptr1->lchild=tmp;
		}
	}
}
}
void inorder(struct node **root)
{
	struct node *ptr;
	ptr=(*root);
	if(*root==NULL)
	{
		printf("");
	}
	else
	{
		inorder(&ptr->lchild);
		printf("%d<%x>\t",ptr->data,ptr);
		inorder(&ptr->rchild);
	}
}
void postorder(struct node **root)
{
	struct node *ptr;
	ptr=(*root);
	if(*root==NULL)
	{
		printf("");
	}
	else
	{
		postorder(&ptr->lchild);
		postorder(&ptr->rchild);
			printf("%d<%x>\t",ptr->data,ptr);
	}
}
void preorder(struct node **root)
{
	struct node *ptr;
	ptr=(*root);
	if(*root==NULL)
	{
		printf("");
	}
	else
	{
			printf("%d<%x>\t",ptr->data,ptr);
		preorder(&ptr->lchild);
		preorder(&ptr->rchild);
	}
}
void searchdata(struct node **root)
{int flag=0,i=0,n;
	printf("Enter the data to be searched:");
		scanf("%d",&n);
	struct node *ptr;
	ptr=*root;
	while(ptr!=NULL)
	{i++;
			if(ptr->data==n)
			{printf("%d is found at address-%x  and level-%d",n,ptr,i);
				flag=1;	
			break;
			}
			else
			{
			if(ptr->data>n)
			{
				ptr=ptr->lchild;
			}
			else
			{
			
				ptr=ptr->rchild;
			}
		}
			
	}
	if(flag==0)
	{
		printf("ELEMENT NOT FOUND");
	}
}
void Deletenode(struct node **root)
{int n,flag=0,k;
		struct node *ptr,*parent,*ptr1;
		ptr=*root;
		printf("Enter the data to be deleted:");
		scanf("%d",&n);
		while(ptr!=NULL)
		{
			if(ptr->data==n)
			{
				flag=1;	
			break;
			}
			else
			{
			if(ptr->data>n)
			{
				parent=ptr;
				ptr=ptr->lchild;
			}
			else
			{
				parent=ptr;
				ptr=ptr->rchild;
			}
			
		}	
		}
		printf("%d is removed from BST",ptr->data);
		if(flag==0)
		{
			printf("NOT FOUND");
		exit(0);
		}
		if(ptr->lchild==NULL && ptr->rchild==NULL)
		{
			if(parent->lchild==ptr)
			{
				parent->lchild=NULL;
			}
			else
			{
				parent->rchild=NULL;
			}
			free(ptr);
		}
		else
		{
			if(ptr->lchild!=NULL && ptr->rchild!=NULL)
			{
				ptr1=succ(&ptr);
				k=ptr1->data;
				free(ptr1);
				ptr->data=k;
				
			}
			else
			{
				if(parent->lchild==ptr)
				{
					if(ptr->lchild==NULL)
					{
						parent->lchild=ptr->rchild;
					}
					else
					{
						parent->lchild=ptr->lchild;
					}
				}
				else
				{
					if(parent->rchild==ptr)
					{
						if(ptr->lchild==NULL)
						{
							parent->rchild=ptr->rchild;
						}
						else
						{
							parent->rchild=ptr->lchild;
						}
					}
				}
				free(ptr);
			}
		}
	
}
int main()
{
struct node *head=NULL;
		int ch,i,k;
	while(1)
	{
		printf("\nMenu of BINARY SEARCH TREE\n");
		printf("1. Insert OPERATION..\n");
		printf("2. perform INORDER TRAVERSAL\n");
		printf("3. perform PREORDER TRAVERSAL\n");
		printf("4. perform POSTORDER TRAVERSAL\n");
		printf("5. Search THE element..\n");
		printf("6. Delete the element..\n");
		printf("7. Exit.\n");
		printf("Enter ur choice :");
		scanf("%d",&ch);
		switch(ch)
		{
	case 1:
		printf("How many no. u want to insert:");
		scanf("%d",&k);
		for(i=0;i<k;i++)
			{
			AddNode(&head);}
		break;
	case 2:
		inorder(&head);
		break;
	case 3:
		preorder(&head);
		break;
	case 4:
		postorder(&head);
		break;
	case 5:
		searchdata(&head);
		break;
	case 6:
		Deletenode(&head);
		break;
	case 7:
		exit(1);
		default:
				printf("Wrong choice\n");
		}
	}
	return 0;
}
