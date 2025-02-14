#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n = 0;
    int dim1 =0, dim2 = 0;
    scanf("%d", &n);
    int arr[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        scanf("%d", &arr[i][j]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            dim1 = dim1 + arr[i][j];

            if(i+ j == n -1 )
            dim2 = dim2 + arr[i][j];


    


        }
       
    }
    int  d = dim1 - dim2;
       d = abs(d);

       printf("%d\n", d);
       return 0 ;
}