#include<stdio.h>
#define PI 3.14159
int main(void)

{
    double radious,volume;
    scanf("%lf",&radious);
    volume = (4.0/3)*PI*radious*radious*radious;
    printf("VOLUME = %.3f\n",volume);
    return 0;
}