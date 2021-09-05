
#include <iostream>
using namespace std;
 
void rotate(int a[], int n)
{
    int i = 0, j = n-1; // i and j pointing to first and last element respectively
      while(i != j)
	  {
      	swap(a[i], a[j]);
      	i++;
     }
}
 
// Driver code
int main()
{
    int a[] = {1, 2, 3, 4, 5}, i;
    int n = sizeof(a) /sizeof(a[0]);
 
    cout << "Given array is \n";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
 
    rotate(a, n);
 
    cout << "\nRotated array is\n";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
 
    return 0;
}
