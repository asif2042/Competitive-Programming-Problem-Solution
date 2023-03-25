#include<stdio.h>
int main(void)
{
    int time2,time1,time;
    scanf("%d",&time1);
    scanf("%d",&time2);
    
     if(time1 > time2)  
     {
        time = 24- time1;
        time = time + time2;
        printf("O JOGO DUROU %d HORA(S)\n",time);
    }
    else if( time2 > time1)
    {
         time = time2 - time1;
         printf("O JOGO DUROU %d HORA(S)\n",time);
    }
    else
    printf("O JOGO DUROU 24 HORA(S)\n");

 
 
 return 0;


}