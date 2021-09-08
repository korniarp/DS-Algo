#include<bits/stdc++.h>
using namespace std;
void bubble(int a[],int n)
{ 
	int f=0;
	for(int i=0;i<n-1;i++)
	{ 
		f=0;
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
				f=1;
			}
		}
		if(f==0)
			break;
	}
}
int main()
{
	int n=0;
	cout<<"Enter the number of elements : \n";
	cin>>n;
	int a[n];
	//int a[5]={2,1,5,7,9};

	for(int i=0;i<n;i++)
		cin>>a[i];
	//n=sizeof(a)/sizeof(a[0]);
	cout<<"Original array : \n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	
	bubble(a,n);
	cout<<"\nSorted array : \n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
