#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Assign the value of a,b and c\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
	if(a>c)
	printf("\nGreatest no=%d",a);
	else
	printf("\nGreatest no=%d",c);
	}
	else
	{
	if(b>c)
	printf("\nGreatest no=%d",b);
	else
	printf("\nGreatest no=%d",c);
	}
	getch();
	return 0;
}
