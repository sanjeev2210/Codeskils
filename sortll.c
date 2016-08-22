 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

int main()
{struct node
{
	int data;
	struct node *next;
};
int i,n,t,a;
	struct node *start,*p,*q,*tmp;
	start=NULL;
	printf("enter the no of data to sort\n");
	scanf("%d",&a);
for(i=0;i<a;i++)
{
printf("Enter the data to be inserted\n");
scanf("%d",&n);		
	tmp=(struct node *)malloc(sizeof(struct node));
		tmp->data=n;
		tmp->next=start;
		start=tmp;
}
		while(tmp !=NULL)
	{
		printf("\n%d\n at address %x",tmp->data,tmp);
		tmp=tmp->next;
	}
		for(p=start;p!=NULL;p=p->next)
		{
			for(q=start;q!=NULL;q=q->next)
			{if(p->data<q->data)
			{
			t=p->data;
			p->data=q->data;
			q->data=t;} 
				 
			}
		}
	printf("sorted linked list r....");
		while(tmp !=NULL)		

	{
		printf("\n%d\n at %x  address",tmp->data,tmp);
		tmp=tmp->next;
	}
return 0;
	}
