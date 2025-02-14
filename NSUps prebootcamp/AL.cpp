#include<iostream>
#include<math.h>
int main(void)
{
    unsigned int n = 0, k = 0 , A[100000], count = 0;
    std::cin>>n;
    std::cin>>k;
    if(n < 1 && k > pow(10 , 7))
    return 1;
    for(int i = 0; i < n; i++)
    {
        std::cin>>A[i];
        if(A[i] % k == 0)
        count++;

    }
    std::cout<<count<<std::endl;
    return 0;
}