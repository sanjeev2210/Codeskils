#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int a1;
	float area1;
	printf("AREA OF EQUILATERAL TRIA")
	printf("assign the value of sides of triangle");
	scanf("%d,&a");
	area1=(sqrt)3*a*a/4
	printf("area=%f",area1);
	getch();
	return 0;

	int a2,b1;
	float area2;
	printf("assign the value of two sides of triangle");
	scanf("%d %d,&a2,&b1");
	area2=(b1*(sqrt)(a2*a2-b1*b1/4)/2)
	printf("area=%f",area2);
	getch();
	return 0;		
}

