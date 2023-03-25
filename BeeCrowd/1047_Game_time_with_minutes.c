#include<stdio.h>
int main(void)
{
    int minutes1,minutes2,hours2,hours1,time1,time2,time,minutes,hours;
    scanf("%d%d",&hours1,&minutes1);
    scanf("%d%d",&hours2,&minutes2);
    hours1 = hours1*60;
    hours2 = hours2*60;
    time1 = hours1 + minutes1;
    time2 = hours2 + minutes2;
    if(time1<time2)
    {
        time = time2 -time1;
    }
    else
    {
        time = (24*60)- time1;
        time = time + time2;
    }
    
 hours = time/60;
 minutes = time%60;
 printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hours,minutes);
 return 0;


}