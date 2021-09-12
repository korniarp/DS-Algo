//Recursive way to find length of linked list

#include<bits/stdc++.h> 
using namespace std;

struct Node
{ 
	int data;
	Node* next;

};


void Insert(Node** pointer,int data) //insert integer at the end of the list
{
	Node* temp1 = new Node();
	
	temp1->data = data;
	temp1->next = NULL;
	if(*pointer == NULL)
	{
		*pointer = temp1;
	}
	else
	{
		Node* temp2 = *pointer;
		while(temp2->next!= NULL)
		{
			temp2 = temp2->next;
		}
		temp2->next = temp1;
	}
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
int count(Node* head)
{
	if(head == NULL)
		return 0;
	
	return 1+count(head->next);
}
int main()
{
	Node *head = NULL ;
	Insert(&head,2);
	Insert(&head,4);
	Insert(&head,6);
	Insert(&head,5); //List : 2,4,6,5
	Print(head); //Print list after all inserts
	cout<<"Length of the list : "<<count(head);

	return 0;
	
	
	
}
