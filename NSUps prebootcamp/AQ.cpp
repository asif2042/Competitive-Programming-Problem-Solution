#include<iostream>
int main(void)
{
    int n = 0, sum = 0, flag= 1;
    std::cin>>n;
    if(n >100 || n < 1)
    return 1;
    int arr[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 3; j++ )
        {
            std::cin>>arr[i][j];
           

        }
        
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < n; j++ )
        {
            
           sum = sum + arr[j][i];

        }
        if(sum != 0)
        {
            flag = 0;
            break;

        }
        sum = 0;
        
    }
    

        if(flag)
        std::cout<<"YES"<<std::endl;
        else
        std::cout<<"NO"<<std::endl;
        return 0;
}