#include<stdio.h>
#include<conio.h>
void quick_sort(int arr[],int low,int high);
	
int main()
{
	int arr[100],i,k;
	printf("Enter the element to be sorted\n");
	scanf("%d",&k);
	printf("plzz enter the no....\n");
	for(i=0;i<k;i++)
	{
		scanf("%d",&arr[i]);
	}
	quick_sort(arr,0,k-1);
	printf("The Sorted List is:\n");
	display(arr,k);

	return 0;
}
	void quick_sort(int arr[],int low,int high)
	{
		int pivot;
		if(low<high)
		{
			pivot=partition(arr,low,high);
			
			quick_sort(arr,low,pivot-1);
			quick_sort(arr,pivot+1,high);
		}
	}
	int partition(int arr[],int low,int high)
	{
	int tmp,c;
	tmp=low;
	while(low<high)
	{
		while(arr[tmp]<=arr[high] && tmp<high)
		{
			high--;
		}
		if(arr[tmp]>arr[high])
		{		//swap(arr[tmp],arr[high]);
		c=arr[tmp];
		arr[tmp]=arr[high];
		arr[high]=c;
			tmp=high;
			low++;
		}
		while(arr[tmp]>=arr[low] && tmp>low)
		{
			low++;
		}
		if(arr[tmp]<arr[low])
		{//swap(arr[tmp],arr[low]);
		c=arr[tmp];
		arr[tmp]=arr[low];
		arr[low]=c;
			tmp=low;
			high--;
		}
	}
		printf("pivot is as:%d\n",arr[tmp]);
			display(arr,k);
	return tmp;

	 }
	 display(int arr[],int k)
	 {int i;
	 		for(i=0;i<k;i++)
	{
		printf("%d\t",arr[i]);
	}
	 }
/*
{
	int t;
	t=p;
	p=q;
	q=t;
}*/
	 


