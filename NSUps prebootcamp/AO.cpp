#include<iostream>
int main(void)
{
    int n = 0, day[7], pages = 0, i = 0;
    std::cin>>n;
    for(int i = 0;i < 7; i++)
    std::cin>>day[i];

    for(int i = 0; 1; i++)
    {
        if( i == 7)
        i = 0;
        pages = pages + day[i];

        
        if(pages > n || pages == n )
        {
          
            std::cout<<i + 1<<std::endl;
            break;
        }
        

    }
    return 0;
}
