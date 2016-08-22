#include<stdio.h>
int main()
{
	int i=5,j=6;
	printf("%d %d\n",i,j);
	swap(i,j);
	printf("%d %d",i,j);
	return 0;
}
void swap(int a, int b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
