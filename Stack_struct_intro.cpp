#include<bits/stdc++.h>
using namespace std;

struct Stack
{ 
	unsigned cap;
	int top;
	int *a;
	
};
int isFull(Stack* stack)
{
	return stack->top == stack->cap;
}
int isEmpty(Stack* stack)
{
	return stack->top == -1;
}
Stack* createStack(unsigned cap)
{
	Stack* stack = (Stack*)malloc(sizeof(Stack)); //allocate memory to stack
	stack->top = -1;
	stack->cap = cap;
	stack->a = (int*)malloc(stack->cap*sizeof(int)); //allocate memory to array
	return stack;
}
void push(Stack* stack, int item)
{
	if(isFull(stack))
		return;
	stack->a[++stack->top] = item;
	cout<<"Pushed "<<item<<" to stack"<<endl;
}
int pop(Stack* stack)
{
	if(isEmpty(stack))
		return INT_MIN;
	return stack->a[stack->top--];
}
int peek(Stack* stack)
{
	if(isEmpty(stack))
		return INT_MIN;
	return stack->a[stack->top];
	
}
void Print(Stack* stack,int len)
{
	for(int i=0;i<=len;i++)
		cout<<stack->a[i]<<" ";
	cout<<endl;
}
int main()
{
	
	Stack* stack = createStack(100);
	push(stack,10);
	cout<<"Top after first push : "<<stack->top<<endl;
	
	push(stack,20);
	cout<<"Top after second push : "<<stack->top<<endl;
	push(stack,30);
	cout<<"Top after third push : "<<stack->top<<endl;
	push(stack,40);
	cout<<"Top after fourth push : "<<stack->top<<endl;
	Print(stack,stack->top);
	cout<<"Poped from stack : "<<pop(stack)<<endl;
	cout<<"Array after popping : "<<endl;
	Print(stack,stack->top);
	cout<<"Value of top after popping : "<<stack->top<<endl;
	cout<<"Top item is : "<<peek(stack);
	return 0;
}
