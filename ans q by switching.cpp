#include<stdio.h>
#include<conio.h>
int main()
{
	int ch;
	printf("\tMENU");
	printf("\nAREA OF RECTANGLE");
	printf("\nAREA OF CIRCLE");
	printf("\nCONVERT C TO F");
	printf("\nSWAP TWO NUMBER WITHOUT USING THIRD VARIABLES");
	printf("\nENTER YOUR CHOICE");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
			int l,b,area1;
	printf("assign the value of l and b\n");
	scanf("%d %d",&l,&b);
	area1=l*b;
	printf("area=%d",area1);
	break;
	case 2:
		int r,area2;
	printf("ASSIGN THE VALUE OF r\n");
	scanf("%d",&r);
	area2=(float)(3.14*r*r);
	printf("area=%f",area2);
	break;
	case 3:
		int c,f;
		printf("assign ahe value of c and f\n");
		scanf("%d %d",&c,&f);
		c=(float)(f-32)*5/9;
		printf("conversion of c to f\t%d %d",c,f);
		break;
		case 4:
			int n;
			printf("assign the value of n\n");
			scanf("%d",&n);
			if(n>=1582)
			{
				if(n%4==0||n%400==0)
				printf("\nIT IS A LEAP YEAR");
				else
				printf("\nIT IS A NONLEAP YEAR");
			}
			else
			printf("\nIT IS A NONLEAP YEAR");
			break;
			case 5:
				int x,y;
				printf("assign the value of x and y\n");
				scanf("%d %d",&x,&y);
				printf("AFTER SWAPING\t%d %d",y,x);
				break;
				default:
				printf("\ninvalid choice");		
	}
	getch();
	return 0;
}
