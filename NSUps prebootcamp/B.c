#include<stdio.h>
int main(void)
{
    int n = 0, i= 0;
   
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum = 0;


   
    for(int j = 0;j < n; j++)
    {
        sum += arr[j];


    }
    printf("%d\n", sum);
      
   
}