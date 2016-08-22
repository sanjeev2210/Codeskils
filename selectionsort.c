#include<stdio.h>
#include<conio.h>
int main()
{	int a[20],n,i,j,min=0;
		printf("enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the element to br inserted\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);}
	for(i=0;i<n;i++)
	{ 
		for(j=i+1;j<n;j++)
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
	printf("sorted array r....\n");
	for(i=0;i<n;i++)
	{
	
		printf("%d\t",a[i]);
	}
	return 0;
}
