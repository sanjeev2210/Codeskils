#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,average;
	printf(" give the average of a and b\n");
	scanf("%d %d",&a,&b);
	average=(float)a+b/2;
	printf("average=%d",average);
	getch();
	return 0;
}
