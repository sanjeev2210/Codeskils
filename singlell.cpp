#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next=NULL;
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
	struct node *tmp=start,*p;
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
	while(p->data==n)
	{
		p=p->next;
	}
	tmp->next=p->next;
	p->next=tmp;
	
}
void DeleteNode(int n)
{
	struct node *curr,*prev;
	curr=start;
	prev=start;
	while(curr->data!=n)
	{
		prev=curr;
		curr=curr->next;
	}
	prev->next=curr->next;
}
void SearchData(int n)
{int i=0,found=0;
	struct node *tmp=start;
	while(tmp->next!=NULL)
	{i++;
		if(tmp->data==n)
		{
			printf("%d found at  position %d and address %x",tmp->data,i,tmp);{found=1;}
			break;
		}
		tmp=tmp->next;
	}
	if(found==0)
	printf("ELEMENT NOT FOUND\n");
}
void DisplayNode()
{
	struct node *tmp=start;
		while(tmp !=NULL)
	{
		printf("%d\t",tmp->data);
		tmp=tmp->next;
	}
	printf("\n");

}
int main()
{int n;
	int ch,m;
	while(1)
	{
		printf("\nMenu of Linked List:\n");
		printf("1. Inserting the element consecutively./insert at beginning..\n");
		printf("2. Insert the element at desired place\n");
		printf("3. Insert the element at the end\n");
		printf("4. Delete a desired element.\n");
		printf("5. Search the respective element.\n");
		printf("6. Print the currently available elements.\n");
		printf("7. Exit.\n");
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
				printf("Enter the data after which u have to insert\n");
				scanf("%d",&n);
				printf("Enter the  the value\n");
				scanf("%d",&m);
				Addbetwn(n,m);
				break;
			case 3:
				printf("Enter the  the value\n");
				scanf("%d",&n);
				Addend(n);
				break;
			case 4:
				printf("enter the element to be deleted\n");
				scanf("%d",&n);
				DeleteNode(n);
				break;
			case 5:
				printf("Enter the data to be searched\n");
				scanf("%d",&n);
				SearchData(n);
				break;
			case 6:
				DisplayNode();
				break;
			case 7:
				printf("%c%c%c Thank You %c%c%c",5,5,5,5,5,5);
				exit(0);
			default:
				printf("Wrong choice\n");
		}
	}
	return 0;
}
