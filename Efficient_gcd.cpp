#include<bits/stdc++.h>
using namespace std;
//GCD Efficient
int gcd_eff(int a , int b)
{
	if(b==0)
		return a;
	return gcd_eff(b,a%b);
}
int main() {
  int a, b;
  std::cin >> a >> b;
  //std::cout << gcd_naive(a, b) << std::endl;
  std::cout << gcd_eff(a,b) << std::endl;
  return 0;
}

