#include<stdio.h>

int main(void)
{
    int N, i;
    long long int sum = 0;
    scanf("%d", &N);
    if(N<= 10 && N>= 1)
    {

    
    int arr[N];
    for( i = 0; i < N ; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    
    printf("%lld\n", sum);
    }
    
    return 0;

}