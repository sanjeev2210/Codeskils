#include<stdio.h>
#include<conio.h> 
main()
{
	int ch,a,b;
	printf("\tMENU");
	printf("\n1.Addition");
	printf("\n2.Substraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	printf("\n\tEnter your choice");
	scanf("%d",&ch);
	printf("\nAssign any two no");
	scanf("%d %d",&a,&b);
	switch(ch)
	{
		case1:
			printf("\nAddition=%d",a+b);
			break;
		case2:
			printf("\nSubstraction=%d",a-b);
			break;
		case3:
			printf("\nMultiplication=%d",a*b);
			break;
		case4:
		     printf("\nDivision=%d",a/b);
		     break;
		     default:
		     	printf("\nInvalid choice");
}
    getch();
    return 0;
}
