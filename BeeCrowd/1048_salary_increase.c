#include<stdio.h>
int main()
{
    double salary,total,readjustable;
    scanf("%lf",&salary);
    if( salary >=0 && salary <= 400.00)
    {
        readjustable = salary*(15/100.0);
        total = salary + readjustable;
        printf("Novo salario: %.2f\n",total);
        printf("Reajuste ganho: %.2f\n",readjustable);
        printf("Em percentual: 15 %%\n");
    }
    else if( salary > 400 && salary <= 800.00)
    {
        readjustable = salary*(12/100.0);
        total = salary + readjustable;
        printf("Novo salario: %.2f\n",total);
        printf("Reajuste ganho: %.2f\n",readjustable);
        printf("Em percentual: 12 %%\n");
    }
    else if( salary > 800 && salary <= 1200.00)
    {
        readjustable = salary*(10/100.0);
        total = salary + readjustable;
        printf("Novo salario: %.2f\n",total);
        printf("Reajuste ganho: %.2f\n",readjustable);
        printf("Em percentual: 10 %%\n");
    }
    else if( salary > 1200 && salary <= 2000.00)
    {
        readjustable = salary*(7/100.0);
        total = salary + readjustable;
        printf("Novo salario: %.2f\n",total);
        printf("Reajuste ganho: %.2f\n",readjustable);
        printf("Em percentual: 7 %%\n");
    }
   else if( salary > 2000)
    {
        readjustable = salary*(4/100.0);
        total = salary + readjustable;
        printf("Novo salario: %.2f\n",total);
        printf("Reajuste ganho: %.2f\n",readjustable);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}