#include<iostream>

int main(void)
{
    int t = 0, n = 0, arr[100000], temp = 0 , min = 0;
    std::cin>>t;
    for(int i = 0; i < t; i++)
    {
        int  flag = 1;
        std::cin>>n;
        for(int j = 0; j < n; j++)
        {
            std::cin>>arr[j];
        }
         for(int j = 0; j < n; j++)
        {
           
            
           
            for(int k = j + 1; k < n; k++)
            {
                if(flag)
            {
                min = arr[j] + arr[k];
                flag = 0;
            }

                temp = arr[j] + arr[k];

                
                if(min > temp)
                min = temp;
                k++;
            

                
            }


            
        }
        std::cout<<min<<std::endl;
        

    }
    return 0;
}