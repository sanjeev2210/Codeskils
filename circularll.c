#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start=NULL;
void AddNode()
{int n;
printf("Enter the value:");
scanf("%d",&n);
		struct node *tmp,*p;
		p=start;
		tmp=(struct node *)malloc(sizeof(struct node));
		tmp->data=n;
		tmp->next=start;
		if(start==NULL)
		{
		tmp->next=tmp;
		start=tmp;
		}
		else
			{
			while (p->next !=start)
			{
            p =p->next;}
       		 p->next =tmp;
    	
   			 }
}
void Addend(int n)
{
	struct node *tmp,*p;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->data=n;
	p=start;
	while(p->next!=start)
	{
		p=p->next;
}
	tmp->next=p->next;
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
void DeleteNode(int n)
{
		struct node *p,*q,*t;
	p=start;
	t=start;

	while(p->next!=start)
	{
		if(p->data==n)
		break;
		else
		{
		q=p;
		p=p->next;
		}
	}
	if(p!=start)
	{
		q->next=p->next;
		free(p);
	}
	else
	{
		while(t->next!=start)
		{
			t=t->next;
		}
		t->next=p->next;
		start=start->next;
		free(p);
	}
}

void SearchData(int n)
{int i=0,found=0;
	struct node *tmp=start;
	while(tmp->next!=NULL)
	{i++;
		if(tmp->data==n)
		{
			printf("%d found at  position =%d and address =%x",tmp->data,i,tmp);{found=1;}
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
	do
	{
		printf("%d\tadd:%x\tadd of next:%x\n",tmp->data,tmp,tmp->next);
		tmp=tmp->next;
	}
		while(tmp!=start);
//	printf("\n");

}
int main()
{struct node *start=NULL;
int n;
int i,k;
	int ch,m;
	while(1)
	{
		printf("\nMenu of CIRCULAR Linked List:\n");
		printf("1. Inserting the element consecutively./insert at beginning..\n");
		printf("2. Insert the element at desired place\n");
		printf("3. Insert the element at the end\n");
		printf("4. Delete a desired element.\n");
		printf("5. Search the respective element.\n");
		printf("6. Print the element/Traverse...\n");
		printf("7. Exit.\n");
		printf("Enter ur choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
		printf("How many no. u want to insert:");
		scanf("%d",&k);
		for(i=0;i<k;i++)
			{
					AddNode();}
				break;
			case 2:
				printf("Enter the data after which u have 2 insert\n");
				scanf("%d",&n);
				printf("Enter the  the value\n");
				scanf("%d",&m);
				Addbetwn(n,m);
				break;
			case 3:
				printf("Enter the value\n");
				scanf("%d",&n);
				Addend(n);
				break;
			case 4:
			printf("How many no. u want to delete:");
				scanf("%d",&k);
				for(i=0;i<k;i++)
				{	
				printf("enter the element to be deleted\n");
				scanf("%d",&n);
				DeleteNode(n);
				}
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
				printf("@....over...@");
				exit(0);
			default:
				printf("Wrong choice\n");
		}
	}
	return 0;
}
