
#include <stdio.h>
#include <stdlib.h>
// #include <math.h>



int puissance(int nb, int p){

    int i;
    int res = nb;
    for (i = 1; i<p; i++){
        res *= nb; 
    }
    return res;
}

int pgp(int nb){

    int cmp = nb;
    int i;

    for (i=0; cmp>0; i++){

        int t = puissance(2,i);
        cmp -=t ;



    }
    // printf("%d", i);
    printf("\n");
    return i;
    
}

int binsize (int nb){
    int p;
    p = pgp(nb);
    int noOne = 1;
    int tab [] = {0,0,0,0,0,0,0,0};
    for (int i = 1; i < p; i++){
      tab[i] = nb % puissance(2,p);

      if (tab[i-1]>1){
          tab[i-1] %= 2;
          tab[i] = 1; 
      } 


    }
    printf("\nresultat: ");
    for (int i = p+1; i > 0; i--)
    {

     
      printf("%d", tab[i]);
      
        /* code */
    }
    
    return 0;


}

void main (){
int nbd;

printf("\n entrer un nombre entier : ");
scanf("%d", &nbd);

binsize(nbd);





}
