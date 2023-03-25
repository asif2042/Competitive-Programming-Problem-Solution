#include<stdio.h>
int main(void)
{
    char name[20];
    double salary,sells_money;
    scanf("%s",name);
    scanf("%lf",&salary);
    scanf("%lf",&sells_money);
    salary = salary + sells_money*(15/100.0);
    printf("TOTAL = R$ %.2f\n",salary);
    return 0;

}