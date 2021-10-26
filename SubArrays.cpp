//Generating all non-empty subarrays
#include<bits/stdc++.h>
using namespace std;
void subarray(int a[],int n)
{
	cout<<"Printing all subarrays :"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int k=i;k<=j;k++)
			{
				cout<<a[k]<<" ";
			}
			cout<<endl;
		}
		
		
	}
}
int main(void)
{
	int n;
	cout<<"Enter the number of elements : "<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	subarray(a,n);
	
}
