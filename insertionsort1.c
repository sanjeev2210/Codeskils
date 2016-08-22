#include<stdio.h>
#include<conio.h>
int main()
{int arr[20],n,i ,j,temp;
printf("enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the element to be inserted\n");
	for(i=0;i<n;i++)
		{
	scanf("%d",&arr[i]);}
	for(i=1;i<n;i++)
{
		temp=arr[i];
	j=i-1;
	while(j>=0&&arr[j]>temp)
	{
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=temp;
	}


	printf("\nsorted array are...");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	
	}
	return 0;
}
 
		
