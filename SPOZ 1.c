#include<stdio.h>
int main()
{
	int a[5],i=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("----------------");
	for(i=0;i<5;i++)
	{
		if(a[i]>42 || a[i]<42)
		{
			
			printf("%d\n",a[i]);
		}
		else
		break;
	}
	return 0;
}
