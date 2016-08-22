   #include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],n,b,found=0;
	printf("Enter the elements:");
	for(n=0;n<5;n++)
	{
		scanf("%d",&a[n]);
	}
	printf("Enter key to be searched.");
	scanf("%d",&b);
	for(n=0;n<5;n++)
	{
		if(a[n]==b)
		{
			printf("Found at %d",n+1);
			found=1;
		}
	}
	if(found==0)
	printf("Not found");
	return 0;
}
