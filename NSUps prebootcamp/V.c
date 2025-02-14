#include<stdio.h>
#include<math.h>
int main(void)
{
    int q = 0, count = 0, im = -1, flag =1;
    long long int n =0;
     scanf("%d", &q);
     if(q > 1000 || q < 1)
     return 1;

     int i = 0;
     for(i = 0; i < q; i++)
     {
        scanf("%d", &n);
       if(n < 1 || n > pow(10 , 18))
       return 1;
        while(n != 1)
        {
            if(n % 2 ==0)
            {
                n = n / 2;
                flag = 1;
                count++;
            }
            else if(n % 3 == 0)
           {
            n = (2*n)/3;
            flag = 1;
            count++;
           }
            else if(n % 5 == 0)
           {
            n = (4 * n )/ 5;
            flag = 1;

            count++;
           }

            else 
            {
               
                printf("%d\n", im);
                flag = 0;
                count = 0;

                break;
            }
        }
        if(flag)
        {
        printf("%d\n", count);
        count = 0;
        }

     }
     return 0;
}