
#include<stdio.h>
#include<conio.h>
int main()
{
	static 	int arr[100],ch,n,a,i,count=0,flag=0;
	while(1)
	{
	printf("\n\nMenu of the program:\n");
	printf("1. Enter the number\n");
	printf("2. Delete the number\n");
	printf("3. Search the number\n");
	printf("4. Print the array elements.\n");
	printf("5. Exit.\n");
	printf("Give ur choice:");
	scanf("%d",&ch); 
	switch(ch)
	{
		case 1:
			printf(" Enter the index\n");
			scanf("%d",&n);
			printf("Enter the value:");
			scanf("%d",&a);
			for(i=count;i>=n;i--)
			{
				arr[i]=arr[i-1];
			}
			for(i=0;i<=count;i++)
			{
				if(i==n)
				{
				arr[i]=a;
				printf("Your value is:%d",arr[i]);
				count++;
				break;
				}
			}
			break;
		case 2:
			printf("Enter the index\n");
			scanf("%d",&n);
			for(i=n;i<=count;i++)
			{
				arr[i]=arr[i+1];
			}
			count=count-1;
			printf("Now The Value at %d is %d",n,arr[n]);
			break;
		case 3:
			printf("Enter the value:");
			scanf("%d",&a);
			for(i=0;i<=count;i++)
			{
				if(arr[i]==a)
				{
				printf("%d is at position %d",a,i);
				flag=1;
				}
			}
			if(flag==0)
				printf("ELEMENT NOT FOUND...");
			break;
		case 4:
			for(i=0;i<count;i++)
			{
				printf("%d\t",arr[i]);
			}
			break;
		case 5:
			printf("OVER");
			break;
		default:
			printf("Wrong choice.");
	}
	
	}
	return 0;
}
