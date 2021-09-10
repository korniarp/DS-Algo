#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node* next;	
};

Node* head;
void Print(Node* p) // print all elements in the list using recursion
{
	if(p == NULL)
		return;
	
	cout<<p->data<<" "; //To print reverse list put next line above this line 
	Print(p->next);
	
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
void Reverse(Node* p)
{
	if(p->next== NULL)
	{
		head = p;
		return;
	}
	Reverse(p->next);
	p->next->next=p; 
	//Node* q = p->next; // Instead of the two lines 
	//q->next = p; //q is the n+1th node and p is the nth node
	p->next = NULL;
	
}
int main(void)
{
	head = NULL ;
	head = Insert(head,2); //Insert takes in address of the head node and data to be inserted & returns address of the head node
	head = Insert(head,4);
	head = Insert(head,6);
	head = Insert(head,5); //List : 2,4,6,5
	cout<<"Original list :"<<endl;
	Print(head); //Print list after all inserts
	Reverse(head);
	cout<<endl;
	cout<<"Reversed list : "<<endl;
	Print(head); 

	//ReversePrint(head);
}
