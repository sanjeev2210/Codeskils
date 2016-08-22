#include<stdio.h>
#include<stdlib.h>
struct Avl{
	int data;
	int balfact;
	struct Avl *left;
	struct Avl *right;
};
typedef struct Avl q;
q *t;
q *create(q *root,int d,int h)
{
	q *n1,*n2;
	if(!root)
	{
		root=malloc(sizeof(q));
		root->data=d;
		root->left=NULL;
		root->right=NULL;
		root->balfact=0;
		t=root;
		h=1;
		return (root);
	}
	if(d<root->data)
	{
		root->left=create(root->left,d,h);
		if(h);
		{switch(root->balfact)
		{
			case 1:n1=root->left;
			       if(n1->balfact==1)
			       {
			       	printf("\nRight rotation along%d",root->data);
			       	root->left=n1->right;
			       	n1->right=root;
			       	root->balfact=0;
			       	root=n1;
				   }
				   else
				   {
				   	printf("\nDouble rotation,left along%d",n1->data);
				   	n2=n1->right;
				   	n1->right=n2->left;
				   	printf("\nthen right along%d\n",root->data);
				   	n2->left=n1;
				   	root->left=n2->right;
				   	n2->right=root;
				   	if(n2->balfact==1)
				   	root->balfact=-1;
				   	else
				   	root->balfact=0;
				   	if(n2->balfact==-1)
				   	n1->balfact=0;
				   	root=n2;}
				   	root->balfact=0;
				   	h=0;
				   	break;
				   	case 0:root->balfact=1;
				   	       break;
				   	case -1:root->balfact=0;
					        h=0;
							       
				   }
		}
		}
		else if(d>root->data)
		{
			root->right=create(root->right,d,h);
			if(h)
			{
				switch(root->balfact)
				{
					case 1:root->balfact=0;
					     h=0;
					     break;
					case 0:root->balfact=-1;
					  break;
					  case -1:n1=root->right;
					          if(n1->balfact==-1)
							  {
							  	printf("\nLeft rotation along%d",root->data);
							  	root->right=n1->left;
							  	n1->left=root;
							  	root->balfact=0;
							  	root=n1;
								   } 
								   else
								   {
								   	printf("\nDouble rotation,right along%d",n1->data);
								   	root->right=n2->left;
								   	n2->left=root;
								   	if(n2->balfact==-1)
								   	root->balfact=1;
								   	else
								   	root->balfact=0;
								   	if(n2->balfact==1)
								   	n1->balfact=-1;
								   	else n1->balfact=0;
								   	root=n2;
								   
									   }    
									   root->balfact=0;
									   h=0;
				}
			}
		}
		else{}
		return (root);
		}
		int disp(q *l)
{     if(l==NULL)
{
	printf("\nTree empty");
	return 0;
}
else
{

	 if (l!= NULL)
    {   
        disp(l->left);
        printf("%d ", l->data);
        disp(l->right);
}    }
    
}
		int main()
		{
			q *root=NULL;
			int x,y,i,K=0;
			printf("\nHow many elements?");
			scanf("%d",&x);
			printf("\nEnter the datas");
			for(i=0;i<x;i++)
			{
				scanf("%d",&y);
				create(&root,y,K);
			}
			printf("\n");
			disp(t);
		}
	
