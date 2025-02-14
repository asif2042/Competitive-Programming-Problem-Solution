#include<stdio.h>
#include<math.h>

void sortf(int *num1, int *num2);
int main(void)
{
    int arr[5], sort[5];
    long int max =0, min = 0;
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        if(!(arr[i] <= pow(10,9) && arr[i] >=1))
        return 0;
        
    }
    for(int i = 0; i < 4; i++)
    {
       for(int j = i+1 ; j< 5 ; j++)
    sortf(&arr[i], &arr[j]);
    }
    for(int count = 0; count < 5; count++)
    {
        if(count != 4)
    min = min + arr[count];
    if(count != 0)
    max +=arr[count];
    }
   
    printf("%ld ", min);
    printf("%ld", max);


    return 0;

    
}
void sortf(int *num1, int *num2)
{
    int temp =0;
    if(*num1 > *num2)
    {
        
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    }
}