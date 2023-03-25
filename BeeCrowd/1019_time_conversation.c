#include<stdio.h>
int main(void)
{
    int N,seconds,minutes,hours;
    scanf("%d",&N);

    hours = N/3600;
    N = N%3600;
    minutes = N/60;
    seconds = N%60; 
    printf("%d:%d:%d\n",hours,minutes,seconds);
    return 0;
}