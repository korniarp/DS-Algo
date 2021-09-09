//Naive way to insert a node at the beginning in a Linked list

#include<bits/stdc++.h> 
using namespace std;

struct Node
{ 
	int data;
	Node* next;

};
Node* head; //Globally declard head so that it can be used through all functions
void Insert(int x)
{
	Node* temp;
	temp = new Node(); //declaration of a temporary variable because we don't wanna tamper head
	temp->data = x;
	//temp->next = NULL  ;// Acts wells for both empty list and list with value
	//if(head!= NULL)
	temp ->next = head;
	head = temp;
}
void Print()
{
	Node *temp = head;
	cout<<"\nThe list is : "<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
int main(void)
{
	int x,n;
	head = NULL;
	//head->data = 2;
	cout<<"How many numbers ?\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter the number :\n";
		cin>>x;
		Insert(x);
		Print();
	}
}
