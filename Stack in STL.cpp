//Stack in STL
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	stack<int>stack;
	if(stack.empty())
		cout<<"Stack is empty now!"<<endl;
	else
		cout<<"Stack is not empty!"<<endl;
	stack.push(21);
	if(stack.empty())
		cout<<"Stack is empty now!"<<endl;
	else
		cout<<"Stack is not empty!"<<endl;
	stack.push(22);
	stack.push(23);
	stack.push(24);
	stack.push(25);
	stack.pop();
	stack.pop();
	cout<<"Size of stack :"<<stack.size();
	while(!stack.empty())
	{
		cout<<' '<<stack.top();
		stack.pop();
	}
	
}
