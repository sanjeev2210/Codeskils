#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *start;
void AddNode(int n)
{
		struct node *tmp;
	
		if(start==NULL)
		{	tmp=(struct node *)malloc(sizeof(struct node));
		tmp->data=n;
		tmp->next=NULL;
		tmp->prev=NULL;
		start=tmp;
			
				//tmp->prev=NULL;
		}
	else
	{	tmp=(struct node *)malloc(sizeof(struct node));
		tmp->data=n;
		tmp->next=start;
		start->prev=tmp;
	//	start->next=NULL;
			tmp->prev=NULL;
		start=tmp;
		}
}
void Addend(int n)
{
struct node *tmp,*p;
	tmp=(struct node *)malloc(sizeof(struct node));
	p=start;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	tmp->prev=p;
	tmp->data=n;
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
	p->next->prev=tmp;
	tmp->prev=p;  
	p->next=tmp;
}
void DeleteNode(int n)
{
	struct node *p;
	p=start;

	while(p->next!=NULL)
	{
		if(p->data==n)
		break;
		else
		p=p->next;
	}
	if(p!=start)
	{
		p->prev->next=p->next;
		free(p);
	}
	else
	{	if(p=start)
	start=start->next;
	free(start->prev);
	start->prev=NULL;
	}
}
void SearchData(int n)
{int i=0,found=0;
	struct node *tmp=start;
	while(tmp!=NULL)
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
{	struct node *tmp=start;
	while(tmp!=NULL)
	{
		printf("%d at address  %x\n ",tmp->data,tmp);
		tmp=tmp->next;
	}
	
}
void DisplayNode_rev()
{
	struct node *tmp=start;
	while(tmp->next!=NULL)
	{
		tmp=tmp->next;
	}
	do
	{
		printf("%d at address  %x\n ",tmp->data,tmp);
		tmp=tmp->prev;
	}
	while(tmp!=NULL);
}
int main()
{//start=NULL;
	int ch,n,m;
	while(1)
	{
		printf("\nMenu of Linked List:\n");
		printf("1. Inserting the element consecutively.\n");
		printf("2. Insert the element at a desired place..\n");
		printf("3. Insert the element at the end\n");
		printf("4. Delete a desired element.\n");
		printf("5. Search the respective element.\n");
		printf("6. Print the currently available elements.\n");
		printf("7. Print the linked list in reverse order.\n");
		printf("8. Exit.\n");
		printf("Enter ur choice :");
		scanf("%d",&ch);
		switch(ch)
		{	case 1:
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
					DisplayNode_rev();
					break;
			case 8:
				printf("Thank You ");
				exit(1);
			default:
				printf("Wrong choice\n");
		}
	}
	return 0;
}

