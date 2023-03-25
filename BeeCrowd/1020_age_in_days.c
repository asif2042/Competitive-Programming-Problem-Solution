#include <stdio.h>
 
#include<stdio.h>
int main(void)
{
    int N,days,months,years;
    scanf("%d",&N);

    years = N/365;
    N = N%365;
    months = N/30;
    days = N%30; 


    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",years,months,days);
    return 0;
}