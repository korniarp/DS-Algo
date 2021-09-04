#include<bits/stdc++.h>
#include<vector>
using namespace std;

void reversal(int a[],int start,int end)
{
	int temp;
	while(start<end)
	{ 
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		
		start++;
		end--;
		
	}
}

void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
void leftrotate(int a[],int n,int k)
{
	if (k == 0)
        return;
    // in case the rotating factor is
    // greater than array length
    k = k % n;
	reversal(a,0,k-1);
	reversal(a,k,n-1);
	reversal(a,0,n-1);
}
int main()
{
	int k = 0, n = 0, t=0;
	int a[] = {1,2,3,4,5,6};
	int p = sizeof(a)/sizeof(a[0]);
	cout<< "Enter the number for array to be rotated by : " ;
	cin>>k;
	cout<<endl;
	  
    leftrotate(a,p,k);
	
	print(a,p);
	return 0;
}
