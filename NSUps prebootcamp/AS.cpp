#include<iostream>
int main(void)
{
    int a = 0, b = 0, c = 0;
    while(i < 30000)
    {
        
        std::cin>>a>>b>>c;
        

        if(a == 0 && b == 0 && c == 0)
        return 0;
       

        else if((a*a + b*b) == c*c)
        std::cout<<"right"<<std::endl;
        else
        std::cout<<"wrong"<<std::endl;



    }
    return 0;
}