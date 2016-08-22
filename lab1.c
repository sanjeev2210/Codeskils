
#include<stdio.h>
#include<conio.h>
int main()
{
	static 	int arr[100],ch,n,a,i,count=0,flag=0;
	while(1)
	{
	printf("\n\nMenu of the program:\n");
	printf("1. Enter the number\n");
	printf("2. sort by selection sort\n");
	printf("3. Search the number linearly\n");
	printf("4. Print the array elements.\n");
	printf("5. Exit.\n");
	printf("Give ur choice:");
	scanf("%d",&ch); 
	switch(ch)
	{
		case 1:
			for(i=0;i<=count;i++)
			{
				printf("%d",arr[i]);
				count++;
				break;
				}
			}
			break;
		case 2:
			intmin=0,j;
				for(i=0;i<count;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(a[i]>a[j])
			{min=j;
			int t;
			t=a[i];
			a[i]=a[min];
			a[min]=t;
			}
		}
	}
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
