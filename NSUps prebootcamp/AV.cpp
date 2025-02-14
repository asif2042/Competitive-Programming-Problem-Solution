#include<iostream>
int main(void)
{
    int t = 0, a = 0, b = 0, temp = 0, digit = 1, count = 0;

    std::cin>>t;
    for(int i = 0; i < t; i++)
    {
    std::cin>>a>>b;
    for(; a <= b; a++)
    {
        temp = a;
        while(temp != 0)
        {
            digit = temp % 10;
            temp = temp / 10;
            if(!digit)
            {
            count++;
            //std::cout<<a<<std::endl;
            break;
            }

        }

    }
    std::cout<<count<<std::endl;
    }
    return 0;
}