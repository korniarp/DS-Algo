// Program in C++ for left rotation using Juggling algorithm 
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int gcd(int x,int y)  // calculates the greatest common divisor of n and k
{
	if(y==0)
	{ 
		return x;
	}
	else
	{
		return gcd(y,x%y);
	}
}
void rotate(int a[],int n,int k)
{
	int temp=0,j=0,d=0;
	
	for(int i=0;i<gcd(n,k);i++)
	{
		j = i;
		temp = a[i];
		while(1)
		{
			d = (j+k)%n;
			if(d == i)
				break;
		
			a[j] = a[d];
			j = d;
		}
		a[j] = temp;
		
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
}
int main()
{
	int k = 0, n = 0, t=0;
	int a[] = {1,2,3,4,5,6};
	int p = sizeof(a)/sizeof(a[0]);
	cout<< "Enter the number for array to be rotated by : " ;
	cin>>k;
	rotate(a,p,k);
	return 0;
}
