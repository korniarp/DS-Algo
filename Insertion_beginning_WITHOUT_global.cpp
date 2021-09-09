//Naive way to insert a node at the beginning in a Linked list

#include<bits/stdc++.h> 
using namespace std;

struct Node
{ 
	int data;
	Node* next;

};
//Node* head; //Globally declard head so that it can be used through all functions
/*Node* Insert(Node *head,int x)
{
	Node* temp;
	temp = new Node(); //declaration of a temporary variable because we don't wanna tamper head
	temp->data = x;
	//temp->next = NULL  ;// Acts wells for both empty list and list with value
	//if(head!= NULL)
	temp ->next = head;
	head = temp;
	return head;
}*/ // Uncomment for head=Insert(head,x)
void Insert(Node** pointerToHead,int x) //head is a pointer already so Insert receieves pointer to pointer
{
	Node* temp = new Node(); //declaration of a temporary variable because we don't wanna tamper head
	temp->data = x;
	//temp->next = NULL  ;// Acts wells for both empty list and list with value
	//if(head!= NULL)
	temp ->next = *pointerToHead; // Dereferencing
	*pointerToHead = temp;
	
}
void Print(Node* head)
{
	//Node *temp = head;
	cout<<"\nThe list is : "<<endl;
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}
int main(void)
{
	int x,n;
	Node* head = NULL;
	cout<<"How many numbers ?\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter the number :\n";
		cin>>x;
	//	head = Insert(head,x);
	Insert(&head,x); //passing the address of head
		Print(head);
	}
}
