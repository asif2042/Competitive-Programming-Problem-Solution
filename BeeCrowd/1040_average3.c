#include <stdio.h>
 
int main() 
{
 double N1,N2,N3,N4,average,score;
 scanf("%lf%lf%lf%lf",&N1,&N2,&N3,&N4);
 average = (N1*2 + N2*3 + N3*4 + N4*1)/(2+3+4+1);
 printf("Media: %.1f\n",average);
 if(average >= 7.0)
 printf("Aluno aprovado.\n");
 else if(average < 5.0)
 printf("Aluno reprovado.\n");
 else if(average >=5.0 && average <= 6.9)
 {
    printf("Aluno em exame.\n");
    printf("Nota do exame:");
    scanf("%lf",&score);
    printf(" %.1f\n",score);
    average = (average + score)/2;
    if(average >= 5.0)
    printf("Aluno aprovado.\n");
    else if(average <=4.9)
    printf("Aluno reprovado.\n");
    printf("Media final: %.1f\n",average);
 }
   
 
    return 0;
}