#include<stdio.h>
int main(void)
{
    float A,B,C , triangle, circle,trapezium,squre,rectangle;
    scanf("%f%f%f",&A,&B,&C);
    triangle = (1/2.0)*A*C;
    circle = 3.14159*C*C;
    trapezium = ((A+B)/2)*C;
    squre = B*B;
    rectangle = A*B;
    printf("TRIANGULO: %.3f\n",triangle);
    printf("CIRCULO: %.3f\n",circle);
    printf("TRAPEZIO: %.3f\n",trapezium);
    printf("QUADRADO: %.3f\n",squre);
    printf("RETANGULO: %.3f\n",rectangle);
    return 0;

}