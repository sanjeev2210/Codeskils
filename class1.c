#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start;
void AddNode(int n)
{
	
		struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
		tmp->data=n;
		tmp->next=start;
		start=tmp;
	
}
void Addend(int n)
{
	struct node *tmp,*p;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->data=n;
	p=start;
	while(p->next!=NULL)
	{
		p=p->next;
}
	tmp->next=NULL;
	p->next=tmp;
}
void Addbetwn(int n,int m)
{struct node *tmp,*p;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->data=m;
	p=start;
	while(p->data!=n)
	{
		p=p->next;
	}
	tmp->next=p->next;
	p->next=tmp;
	
}
void DisplayNode()
{
	struct node *tmp=start;
		while(tmp !=NULL)
	{
		printf("%d\t",tmp->data);
		tmp=tmp->next;
	}
}
	int main()
{struct node *start=NULL;
int n,q;
	int ch,m;
	while(1)
	{printf("\nMENU\n");
	printf("\n1.Enter the two data at beg\n");
	printf("\n2.Enter the 2 data at end");
	printf("\n3.Enter yhe 2 data at betwn");
	printf("\n4.Display the data");
	printf("\n5.Exit");
	printf("\nEnter the choice\n");
	scanf("%d",&ch);
	switch(ch)
	{case 1:
			printf("Enter the  the value\n");
				scanf("%d %d",&n,&q);
				AddNode(n);
				AddNode(q);
				break;
			case 3:
				printf("Enter the data after which u have to insert\n");
				scanf("%d",&m);
				printf("Enter the  the value\n");
				scanf("%d %d",&n,&q);
				Addbetwn(m,n);
					Addbetwn(m,q);
				break;
			case 2:
				printf("Enter the  the value\n");
				scanf("%d %d",&n,&q);
				Addend(n);
					Addend(q);
				break;
			case 4:
				DisplayNode();
				break;
			case 5:
				printf("%c%c%c Thank You %c%c%c",5,5,5,5,5,5);
				break;
			default:
				printf("Wrong choice\n");
		}
	}
	return 0;
}
	
	
