#include<iostream>
int main(void)
{
    int t = 0, a=0, b=0,c= 0, sum = 0;
    std::cin>>t;
    if(t > 1000 || t < 1)
    return 1;
    for(int i = 0 ; i < t ; i ++)
    {
        std::cin>>a>>b>>c;
        if(a > 180 && 1 < 1 && b > 180 && b <1 && c > 180 && c < 1)
        return 1;
    
    sum = a + b + c;
    if( sum == 180)
    std::cout<<"YES"<<std::endl;
    else 
    std::cout<<"NO"<<std::endl;
    }
    return 0;


}