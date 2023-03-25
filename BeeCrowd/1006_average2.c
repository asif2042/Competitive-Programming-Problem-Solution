#include<stdio.h>
int main(void)
{
    double A,B,C, MEDIA;
    scanf("%lf%lf%lf",&A,&B,&C);
   
    if(A<=10.0 && B<=10.0 && C<=10.0)

   { 
    MEDIA = (A*2+ B*3 + C*5)/(2+3+5);
    printf("MEDIA = %.1f\n",MEDIA);
   }
    
    return 0;
}