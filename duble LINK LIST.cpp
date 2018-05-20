#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Node{
		int data;
		struct Node* next;
		struct Node *prev;
		
	       };
	       struct Node* head; 
	Node* getNewNode(int item)
	{
		struct Node* newNode=(Node*)malloc(sizeof(Node));
		newNode->data=item;
		newNode->prev=NULL;
		newNode->next=NULL;
		return newNode;
	}
	void Insert(Node* newNode)
	{
		struct Node* temp=(Node*)malloc(sizeof( Node));
		temp=head;
		head=newNode;
	
		temp->prev=NULL;
		newNode->next=temp;
	}
		
		
	
	void print()
	{
		struct Node* temp=head;
		cout<<"List is";
		while(temp!=NULL)
		{
			cout<<" "<<temp->data;
			temp=temp->next;
		}
		cout<<"\n";
	}
	void Delete(int n)
	{
	    struct Node* temp1=head;
	    if(n==1)
	    {	head=temp1->next;
			free(temp1);
			return;
		}
		int i;
		for(i=0;i<n-2;i++)
		{
			
			temp1=temp1->next;
		}
			struct Node* temp2=temp1->next;
			temp1->next=temp2->next;
			free(temp2);
		}
int main()
{
	head = NULL;
	Node* newNode;
	cout<<"enters number==?";
	int n,i,x,y;
	cin>>n;
	for(i=0;i<n;i++)
	{
		
		cout<<"enters numbers"<<endl;
		cin>>x;
		
	
	
//	Insert(newNode);
			newNode=getNewNode(x);
			
		print();
	}
	cout<<"enter delete number==:";
	cin>>y;
		print();
	Delete(y);

	return 0;
}
