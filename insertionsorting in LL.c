#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *start;
	start=NULL;
	int n,a[20],i,j;
	printf("How many no u want to insert in LL \n");
scanf("%d",&n);
printf("Enter the  the value\n");
for(i=0;i<n;i++)
			{
					scanf("%d",&a[i]);}
	for(i=0;i<n;i++)
	{
			struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
		tmp->data=a[i];
		tmp->next=start;
		start=tmp;
	}
		printf("Before Insertion sorting.........\n");
		struct node *t=start;
		while(t !=NULL)
	{
		printf("%d\t",t->data);
		t=t->next;
	}
	printf("----------------------\n");
	printf("\nAfterInsertion sorting........\n");
	struct node *p,*p1;
	p=start;
	p1=start;
	p=p->next;
	while(p!=NULL)
	{
		p1=start;
		while(p1!=p)
		{if(p1->data>p->data)
		{
			int q;
			q=p1->data;
			p1->data=p->data;
			p->data=q;
		}
		else
		{
			p1=p1->next;
		}
			
		}
		p=p->next;
	}
/*	for(i=0;i<n;i++)
	{
	for(j=0;j<=n;j++)
	{p1=start;
		if(p1->data>p->data)
		{
			int q;
			q=p1->data;
			p1->data=p->data;
			p->data=q;
		}
		else
		p1=p1->next;
	}
	p=p->next;
	}*/
	struct node *k;
	k=start;
		while(k!=NULL)
	{
		printf("%d\t",k->data);
		k=k->next;
	}
	return 0;
}
