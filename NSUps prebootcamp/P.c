#include<stdio.h>
int main(void)
{
    int n = 0, num1 = 0, num2 =0;
    scanf("%d", &n);
    for(int i = 0; i < n ; i++)
    {
        scanf("%d%d", &num1, &num2);
        if(num1 > num2)
        printf(">\n");
        else if(num1 < num2)
        printf("<\n");
        else 
        printf("=\n");


        
        
    }
    return 0;
}