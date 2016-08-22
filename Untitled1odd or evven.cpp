#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],b[20],c[20],n,i,j,k;
	printf("how many no.");
	scanf("%d",&n);
	printf("enter all the no\n");
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{if(a[i]%2==0)
	{b[j]=a[i];
	j++;
	}
	else
	{c[k]=a[i];
	k++;
	}
}
j=0;
	printf("incresing order\n");
	while(j>0)
	{printf("\n%d",b[i]);
	j++;
	}
	k=0;
	printf("decresing ordr\n");
	while(k>0)
	{printf("\n%d",c[i]);
	k++;
	}
	getch();
	return 0;
}
