#include<iostream>


int main(void)
{
   long long unsigned int n = 0, temp = 0;
    std::cin>>n;
   
    
    while(n != 0)
    {
        
        temp = n % 10;
        
        n = n / 10;
        if(temp != 4 && temp != 7)
        {
            std::cout<<"NO"<<std::endl;
            return 0;
        }

    }
    std::cout<<"YES"<<std::endl;
    return 0;
}