#include <iostream>
#include <vector>
#include <algorithm>

 long long int MaxPairwiseProduct(const std::vector<long>& numbers)
{
     long long int max_product = 0;
    int n = numbers.size();
 int index1=-1;
 for(int i=0;i<n;++i)
     if(index1==-1 || (numbers[i]>numbers[index1]))
         index1=i;

    int index2=-1;
    for(int j=0;j<n;j++)
        if((j!=index1) && ((index2==-1) || (numbers[j]>numbers[index2])))
            index2=j;


    return(( long long int)(max_product=numbers[index1]*numbers[index2]));
}

int main() {
    int n;
    std::cin >> n;
    std::vector<long> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
