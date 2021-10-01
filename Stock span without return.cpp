//Efficient algorithm
#include<bits/stdc++.h>
using namespace std;
void calc(int a[], int n)
{
	int span[n];
	span[0] = 1;
	stack<int>stack;
	stack.push(0);
	for(int i=1;i<n;i++)
	{
		while(!stack.empty() && a[stack.top()]<=a[i])
			stack.pop();
		if(stack.empty())
			span[i]=i+1;
		else
			span[i]=i-stack.top();
		stack.push(i);
		
		
	}
	for(int i=0;i<n;i++)
	{
		cout<<span[i]<<" ";
	}
}
printarr(int *ar,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<*(ar+i)<<" ";
	}
}
int main(void)
{

	int arr[]={100,80,60,70,60,75,85};
	int n = sizeof(arr)/sizeof(arr[0]);
	calc(arr,n);
	
	
}
