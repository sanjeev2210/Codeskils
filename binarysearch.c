#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],m,n,i;
		printf("enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the element to br inserted\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);}
	printf("Enter the element to be searched\n");
	scanf("%d",&m);
	int beg=0,last=n-1,mid=0;
	while(last>beg)
	{
		mid=(last+beg)/2;
		if(m==a[mid])
		{
			printf("%d found at %d",m,mid+1 );
			break;
		}
	else if(m<a[mid])
	{
	last=mid-1;
	}
	else if(m>a[mid])
	{
	beg=mid+1;
	}
}
return 0;
}
