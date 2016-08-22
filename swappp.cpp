#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,z;
	printf("enter the value of a and b\n");
	scanf("%d %d",&a,&b);
	z=b;
	b=a;
	a=z;
	printf("\tAfter swapping=%d %d",a,b);
	getch();
	return 0;
}
