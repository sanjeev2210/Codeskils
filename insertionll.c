#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
void insertionsort(struct node **);
void sortedinsert(struct node **,struct node *);
void AddNode(struct node **start)
{int n;
printf("Enter the  the value:");
scanf("%d",&n);
			struct node *tmp;
		tmp=(struct node *)malloc(sizeof(struct node));
		tmp->data=n;
		tmp->next=*start;
		*start=tmp;
}
void display(struct node **start)
{
				struct node *t=*start;
		while(t !=NULL)
	{
		printf("%d (%x)\t",t->data,t);
		t=t->next;
	}
	
}
void insertionsort(struct node **start)
{
	struct node *start1=NULL;
	 struct node *current = *start;
    while (current != NULL)
    {
    	 struct node *next = current->next;
        sortedinsert(&start1, current);
       
        current =next;
    }
    *start=start1;
}
void sortedinsert(struct node **start,struct node *tmp)
{
struct node	*t;
	if(*start == NULL ||(*start)->data >= tmp->data)
	{
		tmp->next=*start;
		*start=tmp;
	}
	else
	{t=*start;
		while(t->next!=NULL && t->next->data < tmp->data)
		{
			t=t->next;
		}
		
			tmp->next=t->next;
				t->next=tmp;
	}
	printf("---------------------------\n");
	 display(&*start);
        printf("\n");
}
int main()
{int i,k;
	struct node *head;
	head=NULL;
		printf("How many no. u want to insert:");
		scanf("%d",&k);
		for(i=0;i<k;i++)
			{
					AddNode(&head);}
		printf("Before Insertion sorting.........\n");
		display(&head);
	insertionsort(&head);
	printf("----------------------\n");
	printf("\nAfterInsertion sorting........\n");
	display(&head);
	return 0;
}
