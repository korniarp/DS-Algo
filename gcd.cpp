#include <iostream>

int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}
int gcd_eff(int a,int b)
{
    int a_dash;
    //printf("a_dash: %d  ",a%b,"\t");

    if(a%b!=0)
    {
        a_dash=a%b;
        //printf("a : %d  ",b,"\t");

        //printf("b : %d  ",a_dash,"\t");

        gcd_eff(b,a_dash);
    }
    else
        return b;

}
int main() {
  int a, b,d;
  std::cin >> a >> b;
  //std::cout << gcd_naive(a, b) << std::endl;
  std::cout << gcd_eff(a,b) << std::endl;
  return 0;
}
