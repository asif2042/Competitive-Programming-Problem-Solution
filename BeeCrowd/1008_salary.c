#include<stdio.h>
int main()
{
    int number, hours;
    double rate,salary;
    scanf("%d",&number);
    scanf("%d",&hours);
    scanf("%lf",&rate);
    salary = hours*rate;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f\n",salary);
    return 0;



}