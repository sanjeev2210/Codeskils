#include<stdio.h>
#include<conio.h>
void Max_heap(int arr[],int i,int n)
{
	int l ,r,largest;
	l=2i;
	r=2i+1;
	if(l<=n && arr[l]>arr[i])
	{
		largest=l;
	}
	else
	{
		largest=i;
	}
	if(r<=n && arr[r]>arr[largest])
	{
		largest=r;
	}
	if(largest!=i)
	{
		int t;
		t=arr[i];
		arr[i]=arr[largest];
		arr[largest]=t;
	}
	Max_heap(arr,largest,n);
}
void Build_maxheap(int arr[],int n)
{int i;
for(i=n/2;i>=1;i--)	
{
	Max_heap(arr,i,n);
}
}
void Extract_max(int arr[],int n)
{	int max;
	if(n<1)
	{
		printf("Heap underflow");
	}
	else
	{
		max=arr[1];
		arr[1]=arr[n];
	}
	Max_heap(arr,1,n);
}
int main()
{
	 int arr[20],n,i;
	printf("Enter the size of array...\n");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=i;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	Build_maxheap(arr,n);
	for(i=1;i<=n;i++)
	{
	Extract_max(arr,n);
	n=n-1;
	}
	printf("Elements after Heap Sorting\n");
		for(i=i;i<=n;i++)
	{
		scanf("%d",arr[i]);
	}
	
}
