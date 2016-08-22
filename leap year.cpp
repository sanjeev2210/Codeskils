#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	if(a>1582)
	{
		if(a%4==0||a%400==0)
		printf("\nIt is a Leap year");
		else
		printf("\nIt is a nonleap year");
	}
	else
	printf("\nIt is a nonleap year");
	getch();
	return 0; 
}
