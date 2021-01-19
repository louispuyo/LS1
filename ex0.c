#include <stdio.h>
int main() {
   int tab[20];
   int s = 0, i;
   float moyenne = 0;

   for (i = 0; i < 20; i++){
       scanf("%f", &tab[i]);
   }
   for(i = 0; i < 20; i++) {
      s = s + tab[i];
   }
   

   moyenne = (float)s / i;
   for (int j = 0; j < 20; j++){
       if (tab[j] > moyenne){
           printf("%f", tab[j]);
       }
   }
   
   return 0;
}