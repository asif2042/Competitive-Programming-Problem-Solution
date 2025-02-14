#include<iostream>
int main(void)
{
    int n, k, l ,c , d, p, nl, np;
    int count = 0, min = 0;
    std::cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    l = l * k; // total drinks
    d = d *c; // total slice


    count = l / nl;
    min = count;
    count = d;
    if(min > count)
    min = count;
    count = p /  np ;
    if(min > count)
    min = count;
    std::cout<<min / n <<std::endl;
    return 0;



}