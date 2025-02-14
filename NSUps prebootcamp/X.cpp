#include<iostream>
int main(void)
{
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0,x = 0 , y = 0;
    std::cin>>x1>>y1;
    std::cin>>x2>>y2;
    x = abs(x1 -x2);
    y = abs(y1 - y2);
    if(y < x)
    std::cout<<x<<std::endl;
    else
    std::cout<<y<<std::endl;
    return 0;

}