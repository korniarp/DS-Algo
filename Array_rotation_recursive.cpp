#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void leftrotate(int arr[],int n)
{
    int temp = arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

void left(int arr[],int d,int n)
{
    for(int i=0;i<d;i++)
        leftrotate(arr,n);
    
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main() {
		 //int t=0,
		 int n=0,d=0;
		 cin>>n>>d;
	 int arr[n];//={1,2,3,4,5,6};
	 //cin>>t;
	 
	 for(int i=0;i<n;i++)
	 {
	 	cin>>arr[i];
	 }
	 n=sizeof(arr)/sizeof(arr[0]);
	 left(arr,d,n);
	 printArray(arr,n);
	return 0;
}
