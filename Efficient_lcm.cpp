#include<bits/stdc++.h>
using namespace std;
long long lcm_eff(int a,int b)
{
	for(long long i =(a>b)?a:b;i<=(long)a*b;i+=(a>b)?a:b)
	{
		if(i%a ==0 && i%b ==0)
			return i;
	}
}
int main()
{
	int a,b;
	cout<<"Enter the numbers :"<<endl;
	cin>>a>>b;
	cout<<lcm_eff(a,b);
}
