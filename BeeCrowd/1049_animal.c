#include <stdio.h>
 
int main() {
 
   char word1[30],word2[30],word3[30];
   scanf("%s%s%s",&word1[30], &word2[30], &word3[30]);
   switch(word1[30])
   {
       case 'vertebrado':
       switch(word2[30])
       {
           case 'ave':
           switch(word3[30])
           {
               case 'carnivoro':
               printf("aguia\n");
               break;
               case 'onivoro':
               printf("pomba\n");
               break;
           }
           case 'mamifero':
           switch(word3[30])
           {
               case 'herbivoro':
               printf("homem\n");
               break;
               case 'onivora':
               printf("vaca\n");
               break
           }
           break;
       }
        case 'invertebrado':
       switch(word2[30])
       {
           case 'inseto':
           switch(word3[30])
           {
               case 'hematofago':
               printf("pulga\n");
               break;
               case 'herbivoro':
               printf("lagarta\n");
               break;
           }
           case 'anelideo':
           switch(word3[30])
           {
               case 'hematofago':
               printf("sanguessuga\n");
               break;
               case 'onivora':
               printf("minhoca\n");
               break;
           }
       }
   }
 
    return 0;
}