#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int low, int high,int k)
{
	if(high<low)
		return -1;
	int mid = (low+high)/2;
	if(k == a[mid])
		return mid;
	if(k>a[mid])
		return binarySearch(a,(mid+1),high,k);
		
	return binarySearch(a,low,(mid-1),k);
}
int findPivot(int a[],int low,int high)
{
	if(low == high)
		return low;
		
	if(high<low)
		return -1;
		
	int mid = (low+high)/2;
	
	if(mid>low && a[mid]<a[mid - 1])
		return mid-1;
		
	if(mid<high && a[mid]>a[mid+1])
		return mid;
		
	if(a[low]>=a[mid])
		return findPivot(a,low,mid-1);
		
	return findPivot(a,mid+1,high);
}
 int pivotBinary(int a[],int n,int k)
 {
 	int pivot =  findPivot(a,0,n-1);
 	cout<<"Pivot : "<<pivot;
 	if(pivot == -1)
 		return binarySearch(a,0,n-1,k);
 	if(a[pivot] == k)
	 return pivot;
	if(a[0] <= k)
		return binarySearch(a,0,pivot-1,k);
	return binarySearch(a,pivot+1,n-1,k);
 }
 int main(void)
 {
 	int k=0;
 	int a[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
 	int n = sizeof(a)/sizeof(a[0]);
 	cout<<"Enter the number to be searched : \n";
 	cin>>k;
 	cout<<endl<<pivotBinary(a,n,k);
 }
