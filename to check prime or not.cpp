#include<stdio.h>
#include<conio.h>
int main()
{
	int a,n,c=0;
	printf("enter the no\n");
	scanf("%d",&a);
	for(n=2;n<a;n++)
	{if(a%n==0)
	c++;
	}
	if(c>=1)
	printf(" not a prime");
	else
	printf("prime");
	getch();
	return 0;
}
