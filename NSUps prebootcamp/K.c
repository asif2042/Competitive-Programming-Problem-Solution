// Online C compiler to run C program online
#include<stdio.h>

int main(void)
{
    int x1=0, x2 = 0, v1 = 1, v2= 0, flag = 0;
 scanf("%d%d%d%d", &x1,&v1,&x2,&v2);
    if(x1 >= 0 && x1 < x2 && x2 <= 10000 && v1 <= 10000 && v1 >=1 && v2 <=10000 && v2 >=1)
    {
    for( int x = 0;(x2 + x*v2) >= (x1 + x*v1) ; x++)
    {
        
        if((x1 + x*v1) == (x2 + x*v2))
        {
            flag++;
           
            break;
        }
    }
    if(flag)
    printf("YES\n");
    else
   printf("NO\n");
    }
    return 0;
}