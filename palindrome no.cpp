#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,rev=0;
	printf("enter the number\n");
	scanf("%d",&a);
	while(a>0)
	{b=a%10;
	rev=rev*10+b;
	a=a/10;
	}
	if(a==rev)
	printf("palindrome no");
	else
	printf("not a palindrome no");
	getch();
	return 0;
}
	

