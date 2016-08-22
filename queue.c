#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int R=0,F=0;
void Enqueue(int q[],int n)
{	int k;
	printf("enter the no to insert\n");
	scanf("%d",&k);
	if(R==n)
	{
		printf("Queue is full\n");
		exit(0);
	}
	else
	{
		if(F==0 && R==0)
		{
			F=1;
		}
		R=R+1;
		q[R]=k;
		printf("%d is inserted in Queue ",k);
	}
}
void Dequeue(int q[])
{	int I;
	if(F==0)
	{
		printf("qUEUE IS empty\n");
		exit(0);
	}
	else
	{
		printf("%d is dequeued from queue\n",q[F]);
		if(F==R)
		{
			R=0;
			F=0;
		}
		else
		F++;
	}	
}
void status(int q[],int n)
{int i;
for(i=1;i<=n;i++)
{
	printf("%d\t",q[i]);
}
	
}
int main()
{	int ch;
	int n;
	int q[20];
	printf("Enter the size of array\n");
	scanf("%d",&n);
		while(1)
	{
		printf("\nMenu:\n");
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Status\n");
		printf("4. Exit.\n");
		printf("Enter ur choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				Enqueue(q,n);
				break;
			case 2:
				Dequeue(q);
				break;
			case 3:
				status(q,n);
				break;
			case 4:
				exit(0);
				default:
					printf("Invalid choice\n");
}
}
return 0;
}
