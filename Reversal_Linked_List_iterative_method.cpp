#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node* next;	
};
//Node* head;  //Global head
Node* Reverse(Node* head)
{
	Node *current = head;
	Node *prev = NULL;
	Node *next ;
	
	while(current!= NULL)
	{
		next = current->next; //store address of next node in the var. next
		current->next = prev; //set link of current node as previous node
		 prev = current; //move precious to current
		 current = next; //move current to next
	}
	head = prev; // prev has address of last node where head should point
	return head;
}
Node* Insert(Node* head,int data) //insert integer at the end of the list
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
	return head;
}
void Print(Node* temp) // print all elements in the list
{
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
int main(void)
{
	Node* head = NULL ;
	head = Insert(head,2); //Insert takes in address of the head node and data to be inserted & returns address of the head node
	head = Insert(head,4);
	head = Insert(head,6);
	head = Insert(head,5); //List : 2,4,6,5
	cout<<"Original list :"<<endl;
	Print(head); //Print list after all inserts
	head = Reverse(head);
	cout<<"Reversed list : "<<endl;
	Print(head);
}
