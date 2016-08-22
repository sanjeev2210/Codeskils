#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int top=-1;
	
		void push(int s[],int k)
		{int n;
			cout<<"Enter the no to push"<<endl;
			cin>>n;
			 if(top>=k-1)
			 {
			 	cout<<"overflow"<<endl;
			 	exit(0);
			 }
			 else
			 {
			 	top=top+1;
			 	s[top]=n;
			 	printf("%d is push\n",n);
			 }
	}
		void pop(int s[])
		{int n;
			if(top<0)
			{
				cout<<"Underflow"<<endl;
				exit(0);
			}
			else
			{
				n=s[top];
				s[top]='\0';
				printf("%d is pulled out\n",n);;
				top--;
			}
			
		}
		void display(int s[],int k)
		{int i;
			if(top<0)
			cout<<"empty"<<endl;
			else 
			{
			if(top==k)
				{
				cout<<"full"<<endl;
				}
			else
			{
				cout<<"Element at top is:-"<<s[top]<<endl;
				for(i=0;i<k;i++)
				{
					cout<<s[i]<<"\t";
				}
				
				cout<<endl;
			}
		}
		}
int main()
{
	int ch,k;
	int s[20],n;
		cout<<"Enter the size of ARRAY.."<<endl;
		cin>>k;
	do
	{
		cout<<"Menu"<<endl;
		cout<<"1.push"<<endl;
		cout<<"2.pop"<<endl;
		cout<<"3.status"<<endl;
		cout<<"4.exit"<<endl;
		cout<<"Enter ur choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				push(s,k);
				break;
			case 2:
				pop(s);
				break;
			case 3:
				display(s,k);
				break;
			case 4:
				break;
		//	default:
			//cout<<"invalid choice"<<endl;
		}
	}
	while(ch!=4);
	return 0;
}

