#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e;
	printf("Check of Armstrong Number...\n\n");
	printf("Type a three digit number\t");
	scanf("%d",&a);
		b=a%100;
		c=b%10;
		d=b/10;
		e=a/100;
		if((e*e*e + d*d*d + c*c*c)==a)
		printf("It is armstrong number",a);
		else
		printf("It isn't an armstrong number");
		getch();
		return 0;
}
