#include<iostream>
using namespace std;
int main()
{
	int *ptr=new int[10];
	cout<<"enter the no."<<endl;
	for(int i=0;i<5;i++)
	{
	//cin>> *(ptr+i);
	cin>>ptr[i];
	}
	cout<<"entered element r......"<<endl;
	for(int j=4;j>=0;j--)
	{
		cout<<*(ptr+j)<<endl;
	}
	return 0;
}
