#include<iostream>
#include<stdio.h>
//#include<iomanip>
int main(void)
{
    double l = 0, n = 0, r = 0, d= 0;
    double ar= 0, ag = 0;
    std::cin>>n;
    if(n <= 100)
    {
        std::cin>>l;
        if(l <= 100)
        {
            r = l * (1.0/5);
            d = l * (6.0/10);
            ar = 3.1416*r*r;
            ag = l* d - ar;
           // std::cout<<std::setprecision(2)<<ar;
           // std::cout<<std::setprecision(2)<<ag<<std::endl;
           printf("%.2f %.2f\n", ar, ag);


        }

    }
    return 0;
}