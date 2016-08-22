 #include<iostream>
using namespace std;
class node{
	public:
	int c;
	int e;
	node *next;
};
class poly{
	node *start1;
	node *start2;
	node *start3;
	public:
		poly();
	void addnode();
	void logic();
	void display();
};
poly::poly()
{
	start1=NULL;
	start2=NULL;
	start3=NULL;
}
void poly::addnode()
{int a,b,k,d;
	cout<<"Enter the coeff & power of 1st polynomial"<<endl;
	cin>>a>>b;
	cout<< "Enter the coeff & power of 2nd polynomial"<<endl;
	cin>>k>>d;
node *pptr=new node;
	pptr->c=a;
	pptr->e=b;
	pptr->next=start1;
	start1=pptr;
		node *qptr=new node;
	qptr->c=k;
	qptr->e=d;
	qptr->next=start2;
	start2=qptr;
}
void poly::logic()
{
	node *pptr,*qptr,*rptr;
	pptr=start1;
	qptr=start2;
	rptr=start3;
	while(pptr!=NULL&&qptr!=NULL)
	{
		if(pptr->e==qptr->e)
		{
			node *tmp=new node;
			rptr->next=tmp;
			rptr=tmp;
			rptr->c=pptr->c+qptr->c;
			rptr->e=pptr->e;
			rptr->next=NULL;
			pptr=pptr->next;
			qptr=qptr->next;
		}
		 if(pptr->e>qptr->e)
		{	node *tmp=new node;
			rptr->next=tmp;
			rptr=tmp;
			rptr->c=pptr->c;
			rptr->e=pptr->e;
			rptr->next=NULL;
			pptr=pptr->next;
			
		}
		 if(pptr->e<qptr->e)
		{	node *tmp=new node;
			rptr->next=tmp;
			rptr=tmp;
			rptr->c=qptr->c;
			rptr->e=qptr->e;
			rptr->next=NULL;
			qptr=qptr->next;
		}
	}

	 if(pptr!=NULL && qptr==NULL)
	{
		while(pptr!=NULL)
		{	node *tmp=new node;
			rptr->next=tmp;
			rptr=tmp;
			rptr->c=pptr->c;
			rptr->e=pptr->e;
			rptr->next=NULL;
			pptr=pptr->next;
			
			
		}
	}
	 if(pptr==NULL&&qptr!=NULL)
	{while(qptr!=NULL)
	{
	
			node *tmp=new node;
			rptr->next=tmp;
			rptr=tmp;
			rptr->c=qptr->c;
			rptr->e=qptr->e;
			rptr->next=NULL;
			qptr=qptr->next;
			
	}
}
void poly::display()
{
	node *pptr=start1;
	node *qptr=start2;
	node *rptr=start3;
	while(pptr!=NULL)
	{
		cout<<pptr->c<<"-"<<pptr->e<<endl;
		pptr=pptr->next;
		
	}
	while(qptr!=NULL)
	{
		cout<<qptr->c<<"-"<<qptr->e<<endl;
		qptr=qptr->next;
	}
	while(rptr!=NULL)
	{
		cout<<rptr->c<<'-'<<rptr->e<<endl;
		rptr=rptr->next;
	}
}
int main()
{
poly obj;
int ch;
while(1)
{cout<<"Menu"<<endl;
cout<<"1.Add the node"<<endl;
cout<<"2.Display the entry"<<endl;
cout<<"3.Add the polynomial"<<endl;
cout<<"4.Exit"<<endl;
cout<<"enter the choice:"<<endl;
cin>>ch;
switch(ch)
{case 1:
	obj.addnode();
	break;
	case 2:
		obj.display();
		break;
		case 3:
		obj.logic();
		cout<<"addition success"<<endl;
		break;
		case 4:
				break;
		default:
			cout<<"wrong choice"<<endl;	
	}	
}
return 0;
}
