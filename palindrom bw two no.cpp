#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,i,num,d,sum=0;
	printf("enter the min and max range\n");
	scanf("%d %d",&a,&b);
	for(i=a;i<b;i++);
	num=i;
	{while(num>0)
	{c=num%10;
	sum=sum+c*c*c;
	num=num/10;
	}
	}
	if(sum==i)
	printf("palindrome no=%d",i);
	else
	printf("not a palindrome no=%d",i);
	getch();
	return 0;
}
