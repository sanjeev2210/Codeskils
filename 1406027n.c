#include<stdio.h>
int arr1[20],arr2[20];
int r1=0,r2=0,f1=0,f2=0;
static int x,y;
int Dequeue(int arr[],int F)
{	int k;
	k=arr[F];
	y++;
	return k;	
}
void Enqueue(int n,int arr[],int *F,int *R)
{
		if(*F==0 && *R==0)
		{
			*F=1;
		}
		*R=*R+1;
		arr[*R]=n;
		x++;
	return;
}
void push()
{
	int k;
	printf("\nenter the no to insert:-");
	scanf("%d",&k);
		if(f1==0 && r1==0)
		{
			f1=1;
		}
		r1=r1+1;
		arr1[r1]=k;
		x++;
	
}
void pop()
{	int a,i,c,d,value;
	if(f2==0 && r2==0)
	{
	
	c=r1;
		for(i=1;i<=c-1;i++)
		{
		a=Dequeue(arr1,f1);
		f1++;
		Enqueue(a,arr2,&f2,&r2);
		}
		value=Dequeue(arr1,f1);
		printf("%d is popped\n",value);
		if(f1==r1)
		{
			f1=0;
			r1=0;
		}
		d=r2;
		for(i=1;i<=d;i++)
		{
		a=Dequeue(arr2,f2);
		f2++;
		Enqueue(a,arr1,&f1,&r1);
	}
	}
	if(f2==r2+1)
	{
		f2=0;
		r2=0;
	}
}
int main()
{
	int ch,num,i;
	printf("stack using Two Queue\n\n");
	do
	{
	printf("\nOptions\n");
	printf("1. Push..\n");
	printf("2. Pop..\n");
	printf("3. Total No. of Enqueue and Dequeue\n");
	printf("4. Status of 1st Queue...\n");
	printf("5. Exit.\n");
	printf("Enter ur Your choice :-");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter the no. of push:-");
			scanf("%d",&num);
			for(i=1;i<=num;i++)
			{
				push();
			}
			break;
		case 2:
			printf("Enter The no. of pop:-");
			scanf("%d",&num);
			for(i=1;i<=num;i++)
			{
				pop();
			}
			break;
		case 3:
			printf("No. of Enqueue: %d\nNo. of Dequeue: %d",x,y);
			break;
		case 4:
			for(i=1;i<=r1;i++)
			{
				printf("%d\t",arr1[i]);
			}
			printf("\nRear is at...%d\n",r1);
			break;
		/*case 5:
				for(i=1;i<=r2;i++)
			{
				printf("%d\t",arr2[i]);
			}
			printf("\nRear is at...%d\n",r2);
			break;*/
		case 5:
			printf("OVER\n");
			break;
		default:
			printf("Invalid Choice..\n");
	}
	}
	while(ch!=6);
	return 0;
}
