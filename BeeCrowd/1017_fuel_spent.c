#include<stdio.h>
int main(void)
{
    int time,speed;
    double fuel;
    scanf("%d%d",&time,&speed);
    fuel = (time*speed)/12.0;
    printf("%.3f\n",fuel);
    return 0;
}