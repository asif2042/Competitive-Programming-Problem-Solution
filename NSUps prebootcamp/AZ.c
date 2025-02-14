#include<stdio.h>
int main(void)
{
    double a, b, c, r, yellow, perpel, red;
    scanf("%lf%lf%lf", &a, &b, &c);
    perpel  = (0.5 * a*b);
    red = perpel / ((a+b+c)/2);
    perpel = perpel - red;
   
    yellow = 3.1416 * (c/2)*(c/2) - red - perpel;

    printf("%.4f %.4f %.4f\n", yellow,  perpel , red);
    return 0;

}