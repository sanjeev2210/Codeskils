#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3],b[3],c[3],i,j;
	printf("addition of two two matrices\n");
	printf("enter the 1st matrices\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
printf("enter the 2nd matrices\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3:j++)
	scanf("%d",&b[i][j]);
}
for(i=0;i<3;i++)
for(j=0;j<3;j++)
c[i][j]=a[i][j]+b[i][j];
printf("addition\n");
for(i=0;i<3;i+=)
{printf("\n");
for(j=0;j<3;j++)
printf("%d\t",c[i][j]);
}
grtch();
return 0;
}
