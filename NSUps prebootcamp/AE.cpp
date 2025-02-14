#include<iostream>
#include<math.h>
int main(void)
{
    int t = 0,  n = 0, fact = 1;
    std::cin>>t;
    for(int i = 0; i < t; i ++)
    {
        std::cin>>n;
        for(int j = n; j >= 2; j--)
        {
            fact = fact * j;

        }
        std::cout<<fact<<std::endl;
        fact = 1;
    }
    return 0;
}
