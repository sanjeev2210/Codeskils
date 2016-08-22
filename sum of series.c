#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,p,sum=0;
	printf("enter the no.\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{p=fact(n/n-1);
	sum=sum+p;
	printf("\nsum=%d",sum);
	}
	getch();
	return 0;
}
int fact(int a)
{int i,result=1;
while(a>0)
{result=result*i;
i++;
}
return result;
}
