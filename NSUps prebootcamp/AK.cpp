#include<iostream>
int main(void)
{
    int n = 0, arr[100], max = 0, sum = 0;
    std::cin>>n;
    for(int i = 0; i < n; i++)
    {
        std::cin>>arr[i];
        if(arr[i] > max)
        max = arr[i];

    }
     for(int i = 0; i < n; i++)
    {
        sum = sum + max - arr[i];
    }
    std::cout<<sum<<std::endl;
    return 0;

}