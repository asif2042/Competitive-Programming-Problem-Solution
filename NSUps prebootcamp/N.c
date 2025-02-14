#include<stdio.h>
int i = 0;

void sort(int *num1, int *num2)
{
    int temp = 0; 
    if( *num1 > *num2)
    {
      temp = *num1;
      *num1 = *num2;
      *num2 = temp;
    }
    
}
int main(void)
{
    int T =0;

    scanf("%d", &T);
    int arr[T][3];
    for(i = 0; i < T ; i++)
    {
        for(int j = 0 ; j < 3; j++)
        scanf("%d", &arr[i][j]);

      for(int num1 = 0; num1 < 2; num1 ++)
      {
        for(int num2= num1 + 1 ; num2 < 3; num2++)
        sort(&arr[i][num1], &arr[i][num2]);
      }

      printf("%d\n", arr[i][1]);

    }
return 0;


}