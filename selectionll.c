#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
void selectionsort(struct node **);
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
				struct node *t=(*start);
		while(t !=NULL)
	{
		printf("%d <%x>\t",t->data,t);
		t=t->next;
	}
}
void selectionsort(struct node **start)
{	struct node *ptr1,*ptr2,*ptr3,*ptr4,*ptr5;
	ptr1=*start;
    while(ptr1->next!=NULL)
	{
		ptr2=ptr1->next;
	    while(ptr2!=NULL)
		{
			if(ptr1->data>ptr2->data)
			{
			 	if(ptr1==*start)
				{
					if(ptr2==ptr1->next)
					{
						ptr1->next=ptr2->next;
						ptr2->next=ptr1;
						*start=ptr2;
						ptr3=ptr1;
						ptr1=ptr2;
						ptr2=ptr3;
						}
					else
					{
						ptr3=ptr1->next;
						ptr1->next=ptr2->next;
						ptr4->next=ptr1;
						ptr2->next=ptr3;
						*start=ptr2;
						ptr3=ptr1;
						ptr1=ptr2;
						ptr2=ptr3;	
					}
				}
				else
				{
					if(ptr2==ptr1->next)
					{
					ptr1->next=ptr2->next;
					ptr2->next=ptr1;
					ptr5->next=ptr2;
					ptr3=ptr1;
					ptr1=ptr2;
					ptr2=ptr3;
					}
		   			else
		   		{
				    ptr3=ptr1->next;
		   		    ptr1->next=ptr2->next;
		   		    ptr4->next=ptr1;
		   		    ptr2->next=ptr3;
		   		    ptr5->next=ptr2;
		   		    ptr3=ptr1;
		   		    ptr1=ptr2;
					ptr2=ptr3;
	            }
		   	 }
	     	
	    }
	       ptr4=ptr2;
	        ptr2=ptr2->next;
			
	}
	display(&*start);
      		 printf("\n");
      		 ptr5=ptr1;
	   		ptr1=ptr1->next;
}
}
int main()
{int i,k;
	struct node *head=NULL;
printf("How many no. u want to insert:");
		scanf("%d",&k);
		for(i=0;i<k;i++)
			{
					AddNode(&head);}
		printf("Before SELECTION sorting.........\n");
		display(&head);
printf("\n");
	printf("----------------------\n");
	
		selectionsort(&head);
			printf("----------------------\n");
	printf("\nAfter SELECTION sorting........\n");
	

	display(&head);
	return 0;
}  

