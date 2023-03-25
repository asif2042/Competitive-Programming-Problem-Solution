#include <stdio.h>
 
int main() 
{
    
 int number1,number2,number3;
 scanf("%d%d%d",&number1,&number2,&number3);
 if(number1>number2 && number1>number3)
 {
    
     if(number2>number3)
    {
        printf("%d\n",number3);
        printf("%d\n",number2);
        printf("%d\n",number1);
    }
    else
    {
        printf("%d\n",number2);
        printf("%d\n",number3); 
        printf("%d\n",number1); 
    }
 }
 else if(number2>number1 && number2>number3)
 {
     
     if(number1>number3)
    {
        printf("%d\n",number3);
        printf("%d\n",number1);
        printf("%d\n",number2);
    }
    else
    {
        printf("%d\n",number1);
        printf("%d\n",number3); 
        printf("%d\n",number2); 
    }
 }
  
  else
  {
      
      if(number1>number2)
     {
      printf("%d\n",number2);
      printf("%d\n",number1);
      printf("%d\n",number3);
     }  
      else
      {
         printf("%d\n",number1);
         printf("%d\n",number2);
         printf("%d\n",number3);   
      }
      
  }
         printf("\n%d\n",number1);
         printf("%d\n",number2);
         printf("%d\n",number3);   
    return 0;
}
