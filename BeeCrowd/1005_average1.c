#include<stdio.h>
int main(void)
{
    double A,B, MEDIA;
    scanf("%lf%lf",&A,&B);
  // if(A<=10.0 && B<=10.0)
  
    
   MEDIA = (A*3.5+ B*7.5)/(3.5+7.5);
    printf("MEDIA = %.5f\n",MEDIA);
  
    return 0;
}