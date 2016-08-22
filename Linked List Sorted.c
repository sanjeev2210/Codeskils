#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head;
int elements;
void AddNode()
{
	int value;
	printf("What is the value?\n");
	scanf("%d",&value);
		struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	elements++;
		tmp->data=value;
		tmp->next=head;
		head=tmp;
	
}
void AddNode_end(struct node *head)
{
	struct node *tmp=head,*end;
	int value;
	printf("What is the value?\n");
	scanf("%d",&value);
	while(tmp->next!=NULL)
	{
		tmp=tmp->next;
	}
	end=tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->data=value;
	tmp->next=NULL;
	end->next=tmp;
}
void DeleteNode()
{
	int value;
	printf("What is the value to delete?\n");
	scanf("%d",&value);
	struct node *tmp,*pre;
	tmp=head;
	pre=head;
	while(tmp->data!=value)
	{
		pre=tmp;
		tmp=tmp->next;	
	}
	pre->next=tmp->next;
}
void SearchData()
{
	struct node *tmp=head;
	int value,count=1,found=0;
	printf("What is the value?\n");
	scanf("%d",&value);
	do
	{
		if(tmp->data==value)
		{
			printf("%d found at address %x at position %d",tmp->data,tmp,count);
			found=1;
			break;
		}
		else
		count++;
		tmp=tmp->next;
	}
	while(tmp!=NULL);
	if(found==0)
	{
		printf("NOT FOUND....");
	}
}
void DisplayNode()
{
	struct node *tmp=head;
	do
	{
		printf("%d\t",tmp->data);
		tmp=tmp->next;
	}
	while(tmp !=NULL);
}
void SortNode()
{
	struct node *tmp,*tmp2;
	int c;
	for(tmp=head;tmp!=NULL;tmp=tmp->next)
	{
		for(tmp2=head;tmp2!=NULL;tmp2->next)
		{
			if((tmp2->data)>(tmp2->next->data))
			{
			c=tmp2->next->data;
			(tmp->next->data)=(tmp2->data);
			tmp2->data=c;
			}
		}
	}	
}
int main()
{
	int ch;
	while(ch!=9)
	{
		printf("\nMenu of Linked List:\n");
		printf("1. Inserting the element consecutively.\n");
		printf("2. Insert the element at the beginning.\n");
		printf("3. Insert the element at the end\n");
		printf("4. Delete a desired element.\n");
		printf("5. Search the respective element.\n");
		printf("6. Print the currently available elements.\n");
		printf("7. Print Sorted linked list.\n");
		printf("8. Count the no. of elements.\n");
		printf("9. Exit.\n");
		printf("Enter ur choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				AddNode();
				break;
			case 2:
				AddNode();
				break;
			case 3:
				AddNode_end(head);
				break;
			case 4:
				DeleteNode();
				break;
			case 5:
				SearchData();
				break;
			case 6:
				DisplayNode();
				break;
			case 7:
				SortNode();
				printf("The sorted list is:\n");
				DisplayNode();
				break;
			case 8:
				printf("The no. of elements: %d",elements);
			case 9:
				printf("%c%c%c Thank You %c%c%c",5,5,5,5,5,5);
				break;
			default:
				printf("Wrong choice\n");
		}
	}
	getch();
	return 0;
}
