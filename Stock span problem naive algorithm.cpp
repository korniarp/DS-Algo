//Simple and naive Stock span problem
#include<bits/stdc++.h>
using namespace std;
void calculate(int a[], int n, int s[])
{
	s[0] = 1; //First element has no precedding element
	for(int i=1;i<n;i++)
	{
		s[i] = 1;
		for(int j=i-1;(j>=0)&& (a[i]>=a[j]);j--)
		{
			s[i]++;
		}
	}
}
void print(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main(void)
{
	int a[] = {100,80,60,70,60,75,85};
	int n = sizeof(a)/sizeof(a[0]);
	int s[n];
	calculate(a,n,s);
	print(s,n);
}
