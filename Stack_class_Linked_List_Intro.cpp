#include<bits/stdc++.h>
using namespace std;
class Stack
{
	public:
		int data;
		Stack *next;	
};
int isEmpty(Stack *head)
{
	return !head;
}
Stack* newNode(int data)
{
	Stack* stacknode = new Stack();
	stacknode->data = data;
	stacknode->next = NULL;
	return stacknode;
}
void push(Stack **head,int data)
{
	
	Stack* stacknode = newNode(data); //Create a new node and point it to NULL in function newNode
	stacknode->next = *head;
	*head = stacknode;
	cout<<data<<" pushed to stack! "<<endl;
	
	
}

int pop(Stack** head)
{
	if(isEmpty(*head))
		return INT_MIN;
	Stack *temp = *head;
	*head = (*head)->next;
	int popped = temp->data;
	free(temp);
	return popped;
}
int peek(Stack* root)
{
    if (isEmpty(root))
        return INT_MIN;
    return root->data;
}
int main()
{
	int b;
	Stack *head = NULL;
	push(&head,10);
	push(&head,20);
	push(&head,30);
	push(&head,40);
	
	cout<<"Element popped out : "<<pop(&head)<<endl;
	cout<<"Top element is : "<<peek(head)<<endl;
	 
    cout<<"Elements present in stack : ";
     //print all elements in stack :
    while(!isEmpty(head))
    {
        // print top element in stack
        cout<<peek(head)<<" ";
        // remove top element in stack
        pop(&head);
    }
 


	return 0;
}
