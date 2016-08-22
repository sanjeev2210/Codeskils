#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,e,sum;
	float percent;
	printf("Assign the value of a,b,c,d and e\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	percent=((float)sum/500)*100;
	printf("sum=%d\npercent=%f",sum, percent);
	getch();
	return 0;
	
	}
