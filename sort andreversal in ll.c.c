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
void sortdata_val()
{int t;
	struct node *p,*q;
	for(p=start;p!=NULL;p=p->next)
		{
			for(q=start;q!=NULL;q=q->next)
			{if(p->data<q->data)
			{
			t=p->data;
			p->data=q->data;
			q->data=t;} 
				 
			}		}
	
}
void rev_data()
{struct node *p,*c,*n;
	c=start;
	p=NULL;
	while(c!=NULL)
	{
		n=c->next;
		c->next=p;
		p=c;
		c=n;
	}
	start=p;
}
void sortdata_add()
{
	struct node *ptr1,*ptr2,*ptr3,*fnd,*tmp;
	int i,j, count=0;
	tmp=start;
	while(tmp!=NULL)
	{
		count++;
		tmp=tmp->next;
	}

	for(i=0;i<count-1;i++)
		{	ptr1=start; 
			ptr2=start->next;
			
			for(j=0;j<count-i-1;j++)
			{  
				if(ptr1->data>ptr2->data)
				{
					if(ptr1==start)
					{
						ptr3=ptr2->next;
						ptr2->next=ptr1;
						ptr1->next=ptr3;
						start=ptr2;
						fnd=ptr2;
						ptr2=ptr3;
						
					}
			  		else
					{
					ptr3=ptr2->next;
				//	fnd=ptr1;
					ptr2->next=ptr1;
					ptr1->next=ptr3;
					fnd->next=ptr2;				
					fnd=ptr2;
					ptr2=ptr3;	
					}
				}
				else
				{
					ptr3=ptr2->next;
					fnd=ptr1;
					ptr1=ptr2;
					ptr2=ptr3;
				}
			}
		}
}
void DisplayNode()
{
	struct node *tmp=start;
		while(tmp !=NULL)
	{
		printf("%d || #%x# \t",tmp->data,tmp);
		tmp=tmp->next;
	}
	printf("\n");
}
int main()
{
		int ch,n;
	while(1)
	{
		printf("\nMenu of Linked List:\n");
		printf("1. Inserting the element consecutively./insert at beginning..\n");
		printf("2. sort the data by value\n");
		printf("3.sort the data by address\n");
		printf("4.display the data\n");
		printf("5.reverse the data\n");
		printf("6.Exit\n");
		printf("Enter ur choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("Enter the  the value\n");
				scanf("%d",&n);
				AddNode(n);
				break;
			case 2:
				sortdata_val();
				printf("...............\n");
				printf("\n sorting success\n");
				break;
				case 3:
					sortdata_add();
						printf("...............\n");
				printf("\n sorting success\n");
					break;
				case 4:
					DisplayNode();
					break;
					case 5:
						rev_data();
						printf("............\n");
						printf("\n  Reversal success\n");
		break;
		case 6:
			break;
		}
	}
	return 0;
  }
