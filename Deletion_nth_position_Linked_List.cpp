#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node* next;	
};
Node* head ; //To store the address of the head node or the first node
void Insert(int data) //insert integer at the end of the list
{
	Node* temp1 = new Node();
	
	temp1->data = data;
	temp1->next = NULL;
	if(head == NULL)
	{
		head = temp1;
	}
	else
	{
		Node* temp2 = head;
		while(temp2->next!= NULL)
		{
			temp2 = temp2->next;
		}
		temp2->next = temp1;
	}
}
void Print() // print all elements in the list
{
	Node* temp = head ;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
void Delete(int n) //Delete node at nth position
{
	Node* temp1 = head;
	if(n==1)
	{
		head=temp1->next;
		delete(temp1);
		return;
	}
	for(int i=0;i<n-2;i++)  //Go to (n-1)th node for deletion of nth node
	{
		temp1 = temp1->next;
	}
	Node* temp2 = temp1->next;
	temp1->next = temp2->next;
	delete(temp2);
	
}
int main()
{
	head = NULL ;
	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5); //List : 2,4,6,5
	Print(); //Print list after all inserts
	int n;
	cin>>n; //Asking position of node to be deleted
	Delete(n); //Deletes the node at this position
	Print(); //Prints after deleteion
	return 0;
	
	
	
}
