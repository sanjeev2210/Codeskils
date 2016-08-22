#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],n,b,found=0;
	printf("Enter the groups of number\n");
	for(n=0;n<5;n++)
	{scanf("%d",&a[n]);
	}
	printf("no to be searched\n");
	scanf("%d",&b);
	for(n=0;n<5;n++)
	if(a[n]==b)
	{printf("found at=%d",n+1);
	found=1;
	}
	getch();
	return 0;
}
