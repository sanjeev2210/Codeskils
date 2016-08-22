#include<stdio.h>
#include<conio.h>
main()
{
	int qty;
	float rate,value,dis,total;
	printf("enter the value of quantity and rate\n");
	scanf("%d %f",&qty,&rate);
	value=qty*rate;
	if(qty>=10);
	dis=value*0.1;
	total=value-dis;
	printf("\ntotal expenses=%f",total);
	getch();
	return 0;
}
