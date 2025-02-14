#include<iostream>
int main(void)
{
   long long int num = 0, temp = 0, r  = 0;
    std::cin>>num;
    //if(num > pow(10, 18))
    
    while(num != 0)
    {
        temp = num % 10;
        num = num / 10;
        r = r*10 + temp;
     

    }
      std::cout<<r<<std::endl;
    
    return 0;

}