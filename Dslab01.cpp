#include <iostream>
using namespace std;
int h=1;
struct Node
{
	int Data;
	Node*left;
	Node*right;
};

void Insert(Node*&root,int key)
{
	if(root==NULL)
	{
		root = new Node;
		root->Data = key;
		root->left = NULL;
		root->right = NULL;
	}
	
	else if(key>root->Data)
	{
		Insert(root->right,key);
	}
	
	else
	Insert(root->left,key);
}

void Inorder(Node* root)
{
	if(!root) return;
	
	else
	{
		Inorder(root->left);
		cout<<root->Data<<"  ";
		Inorder(root->right);
	}
}

int GetMin(Node*temp)
{
	while(temp->left!= NULL)
	{
		temp = temp->left;
	}
	return temp->Data;
}
Node * Delete (Node* root,int key, int p=-1)
{
	if(root==NULL)
	return root;
	
	else if(key > root->Data)
	{
		root->right = Delete(root->right,key);
	}
	else if(key < root->Data)
	{
		root->left = Delete(root->left,key);
	}
	
	else
	{
		if(root->left == NULL)
		{
			if(p==-1 && root->right)
			{
			cout<<"\nCase 1: A root Node With Right Sub tree"<<endl;
			p=2;
			}
			else
			{
				cout<<"\ncase 4:  A Leaf Node"<<endl;
			}
			root = root->right;
			return root;
	
		}
		else if(root->right == NULL)
		{
			if(p==-1)
			{
			cout<<"\nCase 2: A root Node With Left Sub tree"<<endl;
			p=2;
			}
			
			root = root->left;
			return root;
		}
		
		else
		{
				if(p==-1)
			{
			cout<<"\nCase 3: A root Node With both Sub tree"<<endl;
			p=2;
			};
			int min = GetMin(root->right);
			root->Data = min;
			root->right = Delete(root->right,min); 
		}
	}
	return root;
}
int main()
{
	int loop;
	Node*Head = NULL;
	int num;
/*	Insert(Head,36);
	Insert(Head,56);
	Insert(Head,78);
	Insert(Head,32);
	Insert(Head,12);

	
	
	Inorder(Head);
	Head= Delete(Head,36);
	cout<<endl;
	Inorder(Head);*/
	
	cout<<"Enter the no of element:- ";
	cin>>loop;
	
	while(loop--)
	{
		cout<<"Enter No:- ";
		cin>>num;
		Insert(Head,num);
	}
	Inorder(Head);
	
	while(Head)
	{
		cout<<"\nEnter No:- ";
		cin>>num;
		Head= Delete(Head,num);
		Inorder(Head);
		
	}
	
	
	
	
}
