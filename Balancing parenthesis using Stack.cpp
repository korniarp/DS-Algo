#include<bits/stdc++.h>
using namespace std;
bool balanced(string exp)
{
	stack<char> s;
	char x;
	for(int i=0;i<exp.length();i++)
	{
		if(exp[i] =='(' || exp[i]=='[' || exp[i]=='{')
		{
			s.push(exp[i]);
			continue;
		}
		if(s.empty())
		continue;
		
		switch(exp[i])
		{
			case ')' :
				x=s.top();
				s.pop();
				if(x=='{' || x=='[')
					return false;
				break;
			case '}' :
				x=s.top();
				s.pop();
				if(x=='(' || x=='[')
					return false;
				break;
			case ']' :
				x=s.top();
				s.pop();
				if(x=='(' || x=='{')
					return false;
				break;
		}
	}
	return(s.empty());
}
int main(void)
{
	string s = "{()}[]";
	if(balanced(s))
		cout<<"Balanced";
	else
		cout<<"Not balanaced";
	return 0;
}
