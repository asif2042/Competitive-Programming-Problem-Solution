#include<stdio.h>
int main(void)
{
    int n =0; 
    scanf("%d", &n);
    if(n > 0 && n <=100)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = n -i ; j >= 1; j--)
            {
                printf(" ");
            }

            for(int k = i; k >= 1; k--)
            printf("#");

            printf("\n");

        }
    }
    return 0;
}