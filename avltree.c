#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Avlnode
{
    int data;
    int h;
    struct Avlnode* lchild;
    struct Avlnode* rchild;
};	
int findheight( struct Avlnode *root)
{
	int height,x,y; 
	struct Avlnode *ptr,*lptr,*rptr;
	ptr=root;
	if(ptr==NULL)
	{
		height=0;
		return height;
	}
	else
		{
		lptr=ptr->lchild;
		rptr=ptr->rchild;
		x=findheight(lptr);
		y=findheight(rptr);
		if(x<=y)
		height=y+1;
		else
		height=x+1;
		return height;
	}
}
void LLrotation(struct Avlnode *t)
{
	struct Avlnode *Aptr,*pptr;
	pptr=t;
	Aptr=pptr->lchild;
	pptr->lchild=Aptr->rchild;
	pptr->h=findheight(pptr);
	Aptr->h=findheight(Aptr);
	pptr=Aptr;
}
void RRrotation(struct Avlnode *t)
{
	struct Avlnode *Bptr,*pptr;
	pptr=t;
	Bptr=pptr->rchild;
	pptr->rchild=Bptr->lchild;
	pptr->h=findheight(pptr);
	Bptr->h=findheight(Bptr);
	pptr=Bptr;
}
void LRrotation(struct Avlnode *t)
{
	struct Avlnode *Aptr,*pptr;
	pptr=t;
	Aptr=pptr->lchild;
	RRrotation(Aptr);
	LLrotation(pptr);
}
void RLrotation(struct Avlnode *t)
{
	struct Avlnode *Aptr,*pptr;
	pptr=t;
	Aptr=pptr->lchild;
	LLrotation(Aptr);
	RRrotation(pptr);
}
void inorder(struct Avlnode **root)
{
	struct Avlnode *ptr;
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
struct Avlnode *AddNode(struct Avlnode **root,struct Avlnode *Nptr)
{
struct Avlnode *ptr,*lptr,*rptr;
int h1,h2,bf;
ptr=*root;
	if(ptr==NULL)
	{
		ptr=Nptr;
		Nptr->lchild=NULL;
		Nptr->rchild=NULL;
		ptr->h=1;
		return ptr;
	}
	else
	{
		if(Nptr->data<ptr->data)
		{
			AddNode(&ptr->lchild,Nptr);
			lptr=ptr->lchild;
			rptr=ptr->rchild;
			if(rptr==NULL)
			{
				h2=0;
			}
			else
			{
				h2=rptr->h;
				h1=lptr->h;
				bf=h1-h2;
				if(bf==2)
				{
					if(Nptr->data<lptr->data)
					{
						LLrotation(ptr);
					}
					else
					{
						LRrotation(ptr);
					}
					ptr->h=findheight(ptr);
				}
			}
		}
		else
		{
			if(Nptr->data>ptr->data)
			{
				AddNode(&ptr->rchild,Nptr);
				rptr=ptr->rchild;
				lptr=ptr->lchild;
				if(lptr==NULL)
				{
					h1=0;
				}
				else
				{
					h2=rptr->h;
					h1=lptr->h;
					bf=h1-h2;
					if(bf==-2)
					{
					if(Nptr->data>rptr->data)
					{
						RRrotation(ptr);
					}
					else
					{
						RLrotation(ptr);
					}
					ptr->h=findheight(ptr);
				}
				
			}
		}
	}
}
return ptr;
}
int main()
{
	struct Avlnode *head=NULL;
		struct Avlnode *tmp;
		tmp=(struct Avlnode *)malloc(sizeof(struct Avlnode));
		int ch,i,k,n;
	while(1)
	{
		printf("\nMenu of AVL TREE\n");
		printf("1. Insert OPERATION..\n");
		printf("2. perform INORDER TRAVERSAL\n");
		printf("3. Delete the element..\n");
		printf("4. Exit.\n");
		printf("Enter ur choice :");
		scanf("%d",&ch);
		switch(ch)
		{
	case 1:
		printf("How many no. u want to insert:");
		scanf("%d",&k);
		for(i=0;i<k;i++)
			{
			printf("Enter the value:");
			scanf("%d",&n);
			tmp->data=n;
			head=AddNode(&head,tmp);
			}
			head=NULL;
			break;
	case 2:
		inorder(&head);
		break;
	case 3:
		break;
	case 4:
		exit(0);
	default:
		printf("INVALID CHOICE");
}
}
return 0;
}
