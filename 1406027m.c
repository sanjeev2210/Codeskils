#include<stdio.h>
int arr1[20],arr2[20];
int top1=-1,top2=-1;
static int x,y;
int push(int value)
{
	top2=top2+1;
	arr2[top2]=value;
	x++;
}
int pop(int arr[],int top)
{
	int k;
	k =arr[top];
	y++;
	return k;
}
void enqueue()
{
	int data;
	printf("\nEnter the Data 2 insert:-");
	scanf("%d",&data);
	top1++;
	arr1[top1]=data;
	x++;
}
void dequeue()
{
	int a,i,c,d;
	c=top1;
	if(top2==-1) 
	{
		for(i=0;i<=c;i++)
		{
		a=pop(arr1,top1);
		top1=top1-1;
		push(a);
		}
		d=pop(arr2,top2);
		top2=top2-1;
		printf("%d is dequeued.\n",d);
	}
	else
	{
		a=pop(arr2,top2);
		top2=top2-1;
		printf("%d is dequeued.\n",a);
	}
}
int main()
{
	int ch,num,i;
	printf("Queue using Two Stack\n\n");
	do
	{
	printf("\nOptions\n");
	printf("1. Enqueue.\n");
	printf("2. Dequeue.\n");
	printf("3. Total No. of POP and PUSH\n");
	printf("4. Status of 1st stack...\n");
	printf("5. Status of 2nd stack..\n ");
	printf("6. Exit.\n");
	printf("Enter ur Your choice :-");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter the no. of Enqueue:-");
			scanf("%d",&num);
			for(i=1;i<=num;i++)
			{
				enqueue();
			}
			break;
		case 2:
			printf("Enter The no. of Deqeues..\t");
			scanf("%d",&num);
			for(i=1;i<=num;i++)
			{
				dequeue();
			}
			break;
		case 3:
			printf("No. of POP: %d\nNo. of PUSH: %d",x,y);
			break;
		case 4:
			for(i=0;i<=top1;i++)
			{
				printf("%d\t",arr1[i]);
			}
			printf("\nTop is at...%d\n",top1);
			break;
		case 5:
				for(i=0;i<=top2;i++)
			{
				printf("%d\t",arr2[i]);
			}
			printf("\nTop is at...%d\n",top2);
			break;
		case 6:
			printf("OVER\n");
			break;
		default:
			printf("Invalid Choice..\n");
	}
	}
	while(ch!=6);
}
