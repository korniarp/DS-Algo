#include<bits/stdc++.h> 
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
};
bool search(Node* head, int x) 
{
	if(head == NULL)
		return false;
	if(head->data == x)
		return true;
	return search(head->next,x);
} 
  
void Insert(Node** head_ref,int data) //insert integer at the head of the list
{
	Node* new_node = new Node();
  
    
    new_node->data = data; 
  

    new_node->next = (*head_ref); 

    (*head_ref) = new_node; 
	
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
int main()
{
	int key;
	Node *head = NULL ;
	Insert(&head,2);
	Insert(&head,4);
	Insert(&head,6);
	Insert(&head,5); //List : 2,4,6,5
	Print(head); //Print list after all inserts
	cout<<"Enter the number to be searched : "<<endl;
	cin>>key;
	search(head,key)?cout<<"Present in Linked List!" :cout<<"Not present!";
	return 0;
	
	
	
} 
