#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int val;
	int wt;
	double ratio;	
};
bool compare(Node p,Node q)
{
	return p.ratio>q.ratio;	
}

int main()
{
	double max_profit=0;
	int i=0;
	int n,t;
	cin>>n;
	t=n;
	while(t-->0)
	{
		
		int bag_wt;
		cin>>bag_wt;
		Node items[n];
		for(int i=0;i<n;i++)
		{
			cin>>items[i].val;
			cin>>items[i].wt;
		}
		for(int i=0;i<n;i++)
		{
			items[i].ratio=(double)items[i].val/items[i].wt;
		}
		sort(items,items+n,compare);

		
		while(i<n && bag_wt!=0)
		{
			
			if(items[i].wt<=bag_wt)
			{
				max_profit+=items[i].val;
				bag_wt-=items[i].wt;
			}
			else
			{
				max_profit+=items[i].val*((double)bag_wt/items[i].wt);
				break;
			}
			i++;
		}
		cout<<fixed<<setprecision(4)<<max_profit<<endl;
	}
	return 0;
}
