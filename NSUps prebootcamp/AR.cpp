#include<iostream>
#include<stdio.h>
int main(void)
{
    int t = 0, q = 0, p = 0;
    double tot_pric = 0;
    std::cin>>t;
    for(int i = 0; i < t ; i ++)
    {
        std::cin>>q>>p;
        tot_pric = p*q;

        if(q > 1000)
        tot_pric = tot_pric *(0.9);
        //std::cout<<tot_pric<<std::endl;
        printf("%f\n", tot_pric);
    }  
        
    return 0;

}