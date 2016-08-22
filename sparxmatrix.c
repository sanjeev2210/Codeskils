#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int i;
int j;
	int data;
	struct node *rowl;
	struct node *coll;
};
void display(struct node **head,int m,int n)
{
		struct node *ptr,*ptr1;
	ptr=(*head)->coll;
	while(ptr!=(*head))
	{
		ptr1=ptr->rowl;
		for(m=1;m<=3;m++)
		{
			if(ptr1->j==m)
			{
				printf("%d\t",ptr1->data);
				
				ptr1=ptr1->rowl;
			}
			else
			printf("_\t");
		}
		printf("\n");
		ptr=ptr->coll;
	}
}
void insert(struct node *head)
{		int r,c;
	struct node *rowheader,*colheader,*rowptr,*colptr,*ptr1,*ptr2,*ptr;
	ptr=malloc(sizeof(struct node));
	printf("\nAssign the value:-");
	scanf("%d",&ptr->data);
	printf("\nAssign the Row:-");
	scanf("%d",&r);
	printf("\nAssign the Column:-");
	scanf("%d",&c);
	printf("xxxxx\n");
	 rowheader=head->coll;
	 colheader=head->rowl;
	 	printf("xxxxx\n");
	 while(rowheader->i!=r)
	 {
	 	rowheader=rowheader->coll;
	 }
	 	printf("xxxxx\n");
	 while(colheader->j!=c)
	 {
	 	colheader=colheader->rowl;
	 }
	 	printf("xxxxx\n");
	 rowptr=rowheader;
	 while(rowptr->j<c)
	 {
	 ptr1=rowptr;
	 rowptr=rowptr->rowl;
	 if(rowptr==rowheader)
	 break;
	 }
	 colptr=colheader;
	 while(colptr->i<r)
	 {
	 ptr2=colptr;
	 colptr=colptr->coll;
	 if(colptr==colheader)
	 break;
	 }
	 	ptr->i=r;
	 	ptr->j=c;
	 	ptr->rowl=rowptr;
	 	ptr->coll=colptr;
	 	ptr1->rowl=ptr;
	 	ptr2->coll=ptr;
	 
 }
int main()
{
	printf("***WELCOME 2 SPARX MATRIX***\n\n");
	int m,n;
	int row,col;
	struct node *p;

	int z,x;
	 struct node *ptr;
	printf("Enter the no of Row:-");
	scanf("%d",&m);
	printf("\nEnter the no of Column:-");
	scanf("%d",&n);
	struct node *head;
	head=(struct node *)malloc(sizeof(struct node));
		head->i=m;
		head->j=n;
		head->rowl=head;
		head->coll=head;
	p=head;
	for(col=1;col<=n;col++)
	{struct node *ptr;
		ptr=(struct node *)malloc(sizeof(struct node));
		ptr->i=0;
		ptr->j=col;
		p->rowl=ptr;
		ptr->rowl=head;
		ptr->coll=ptr;
		p=ptr;
	}
	for(row=1;row<=m;row++)
	{struct node *ptr;
		ptr=(struct node *)malloc(sizeof(struct node));
		ptr->i=row;
		ptr->j=0;
		p->coll=ptr;
		ptr->coll=head;
		ptr->rowl=ptr;
		p=ptr;
	}
	printf("\nEnter the no of element to insert in Sparx matrix:");
	scanf("%d",&z);
	for(x=0;x<z;x++)
	{
		insert(head);
}
display(&head,m,n);
return 0;
}
