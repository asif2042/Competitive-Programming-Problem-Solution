#include <stdio.h>
 
int main() {
 
   int n1,n2,n3,greatest;
    scanf("%d%d%d",&n1,&n2,&n3);
    greatest = n1;
    if(greatest < n2)
    {
        greatest = n2;
    }
   if(greatest < n3)
   greatest = n3;
     printf("%d eh o maior\n", greatest);
 
    return 0;
}