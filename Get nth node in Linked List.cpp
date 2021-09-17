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
	if(head == NULL)
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
void Print(Node *head)
{
	while(head != NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}
int Getn(Node *head,int n)
{ 
	int count=0;
	Node *temp = head;
	
		while(temp != NULL)
		{
			if(count == n)
				return temp->data;
			count++;
			temp = temp->next;
		}
	return temp->data;
	
	assert(0); //takes expression or variable as an argument, if expression evaluates, function does not do anything; if false it displays a message on the standard error screen
	
}
int main()
{ 
	int n;
	Node *head = NULL;
	head = Insert(head,2);
	head = Insert(head,4);
	head = Insert(head,6);
	head = Insert(head,5); //List : 2,4,6,5
	Print(head); //Print list after all inserts
	cout<<"Enter the index : "<<endl;
	cin>>n;
	cout<<"The number at index "<<n<<" is : "<<Getn(head,n);
	return 0;
	
	
}
