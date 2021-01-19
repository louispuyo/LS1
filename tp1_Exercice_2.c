#include <stdio.h>



void tri_croissant (float tableau[], int taille_tableau)
{
    int c = 0 ;
    int i = 0 ;
    int j = 0 ;
    int k = 0 ;
 
    do
    {
            for (i=0 ; i<taille_tableau-1 ; i++)
            {
                if (tableau[i] > tableau[i+1])
                {
                    k = tableau[i] ;
                    tableau[i] = tableau[i+1] ;
                    tableau[i+1] = k ;
                }
            }
  
            for (j=taille_tableau-1 ; j>0 ; j--)
            {
                if(tableau[j]<tableau[j-1])
                {
                    k = tableau[j] ;
                    tableau[j] = tableau[j-1] ;
                    tableau[j-1] = k ;
                }
            }
        c++ ;
 
    } while (c<taille_tableau) ;
}  



int main () {
    
 
    float tableau [50];
    
    for (int i=0; i<10; i++){
        
        printf("entrer valeurs %i : ", i+1);
        scanf("%f",&tableau[i]);
        
        
    }
    
    tri_croissant(tableau, 50);
    
      printf("tableau rangé : [");
      
      for (int i=0; i<10; i++){
    
      printf("%f,", tableau[i]);
        
        
        
      }
      printf("]");
    
    
    return 1;

    
}

