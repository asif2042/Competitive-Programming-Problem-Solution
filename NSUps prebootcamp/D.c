#include<stdio.h>
int main(void)
{
    int a[3];
    int b[3];
    int bob = 0, alice = 0;
    for(int i = 0; i < 3; i ++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 3; i ++)
    {
        scanf("%d", &b[i]);
    }
    for(int i = 0; i < 3; i ++)
    {
        if(a[i] < b[i])
        bob++;
       else if(a[i] > b[i])
        alice++;

    }
    int rtn[2];
    rtn[0] = alice;
    rtn[1] = bob;
 
    for(int i = 0; i < 2; i++)
    printf("%d ", rtn[i]);

    return 0;
}