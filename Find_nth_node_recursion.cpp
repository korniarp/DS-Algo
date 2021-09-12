//program to get the nth node by recursion
#include<bits/stdc++.h> 
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
};
Node* Insert(Node* head, int data)
{
	Node *temp = new Node();
	temp->data = data;
	temp->next = NULL;
	if(head ==NULL)
	{
		head = temp;
	}
	else
	{
		Node *temp1 = head;
		while(temp1->next != NULL)
		{
			temp1=temp1->next;
		}
		temp1->next = temp;
	}
	return head;
	
}
void Print(Node* head)
{
	cout<<"\nThe list is : "<<endl;
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}
int printnode(Node *head,int index) //0th node is the first node
{
 		Node* current = head;
 
    if(head==NULL)
    	return 0;
    if(index==0)
    	return head->data;
    
    return printnode(head->next,index-1);

    //assert(0);
	
}
int main()
{
	int n;
	Node *head = NULL ;
	head = Insert(head,2);
	head = Insert(head,4);
	head = Insert(head,6);
	head = Insert(head,5); //List : 2,4,6,5
	Print(head); //Print list after all inserts
	cout<<"Enter the number of node : "<<endl;
	cin>>n;
	n = printnode(head,n);
	if(n==0)
	{
		cout<<"Node not present! "<<endl;
	}
	else
	{
		cout<<"The number is : "<<n;
	}
	
	return 0;
	
	
	
}
