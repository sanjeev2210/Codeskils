#include<stdio.h>
#include<conio.h>
void merge_sort(int arr[],int low,int high);
	

	void merge_sort(int arr[],int low,int high)
	{
		if(low>=high)
		return;
		else
		{
		int mid;
		mid=(low+high)/2;
		merge_sort(arr,low,mid);
		merge_sort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
void merge(int arr[],int low,int mid,int high)
{
	int i,j,k,m;
	int c[high-low+1];
	i=low;
	j=mid+1;
	k=high;
	while(i<=mid && j<=high)
	{
		if(arr[i]<arr[j])
		{
		c[k]=arr[i];
		i++;
		k++;	
		}
		else
		{
			c[k]=arr[j];
			j++;
			k++;
		}
	}
	if(i>mid && j<=high)
	{
		for( m=j;m<=high;m++)
		{
			c[k]=arr[m];
			k++;
		}
	}
	else
	{
		if(i<mid && j>high)
		{
			for(m=i;m<=mid;m++)
			{
				c[k]=arr[m];
				k++;
			}
		}
	}
	for(m=1;m<k-1;m++)
	{
		arr[m]=c[m];
		m++;
	}
}
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
	merge_sort(arr,0,k-1);
	printf("The Sorted List is:\n");
	for(i=0;i<k;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
		
		
