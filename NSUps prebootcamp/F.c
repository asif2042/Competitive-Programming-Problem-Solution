#include<stdio.h>
int main(void)
{
    int n = 0;
    float  pst =0, ngt = 0, zerro = 0;
    scanf("%d", &n);

    if(n > 0 && n <= 100)
    {
    int arr[n];
    int i = 0;

    do{
        scanf("%d", &arr[i]);
        if(arr[i] > 0)
        pst++;
        else if(arr[i] < 0)
        ngt++; 
        else
        zerro++;
        i++; 
    }while(i < n && arr[i-1] <= 100 && arr[i-1] >= -100);
    pst = pst/n;
    ngt = ngt/n;
    zerro = zerro/n;

    printf("%f\n", pst);
    printf("%f\n", ngt);
    printf("%f\n", zerro);
    





    }
    return 0;
}