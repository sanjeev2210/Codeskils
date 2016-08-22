#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,t;
	printf("Enter the no:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{t=n*i;
	printf("\n%d * %d=%d",n,i,t);
	}
	getch();
	return 0;	
}
