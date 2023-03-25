#include<stdio.h>
int main(void)
{
    double salary = 0,taxes = 0;
    scanf("%lf", &salary);
    if(salary >= 0 && salary <= 2000.0)
   { 
   
    printf("Isento\n");
   }
    else if(salary > 2000.0 && salary <= 3000.0)
    {
        taxes = (salary - 2000)*0.08;
        printf("R$ %.2f\n", taxes);
    }
    else if(salary > 3000.0 && salary <= 4500.0)
    {
        taxes = (salary - 3000.0)*0.18;
        taxes = taxes + 1000*0.08;
        printf("R$ %.2f\n", taxes);
    }
    else if(salary > 4500)
    {
        taxes = (salary - 4500)*0.28;
        taxes = taxes + 1000 * 0.08 + 1500*0.18;
        printf("R$ %.2f\n", taxes);
    }

return 0;

}