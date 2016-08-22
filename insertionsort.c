#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],b[20],n,i,j,k  ;
		printf("enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the element to be inserted\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);}
	b[0]=a[0];
	for(i=1;i<=n-1;i++)
	{	//b[i]=a[i];
		for(j=i-1;j>=0;j--)
		{if(b[j]<a[i])
		b[j+1]=a[i];
		else
		for(k=j;k>=0;k--)
		{
			b[j+1]=b[j];
		}
		b[j]=a[i];
			  
		}
	}
	printf("sorted elements are....");
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
	return 0;
}
