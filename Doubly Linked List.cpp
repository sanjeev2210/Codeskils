#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
#include<iostream>
using namespace std;
struct node

{
	struct node *prev=NULL;
	int data;
	struct node *next=NULL;
};
struct node *start=NULL;
void AddNode(int n)
{
		struct node *tmp;
		tmp=(struct node *)malloc(sizeof(struct node));
		if(start==NULL)
		{
		tmp->data=n;
		tmp->next=NULL;
		tmp->prev=NULL;
		start=tmp;
			
				//tmp->prev=NULL;
		}
	else
	{
		tmp->data=n;
		tmp->next=start;
		tmp->prev=NULL;
		start->prev=tmp;
		start=tmp;
		}
}
void DisplayNode()
{	struct node *tmp=start;
	while(tmp!=NULL)
	{
		printf("%d\t At addr..%x",tmp->data,tmp);
		tmp=tmp->next;
	}
	
}
int main()
{
	
	AddNode(11);
	AddNode(25);
	AddNode(30);
	cout<<start->data<<endl;
	cout<<start->prev<<endl;
	cout<<start->next<<endl;
	cout<<start->next->data<<endl;
	cout<<start->next->next->data<<endl;
	
	DisplayNode();
	
	
	
}
