#include <stdio.h>
#include <stdlib.h>


void main(){
int *tab;
int tabSize;
int n;
printf("entrer la taille du tableau \n");
scanf("%d", &tabSize);
tab = malloc(tabSize * sizeof(int));
printf("entrer votre nombre  de taille %d : \n", tabSize);
scanf("%d", &n);
for (int i =1; i <tabSize+1; i++){
    tab[i] = (n%(i*10));
}
int res = moyenne(&tab, tabSize);
printf("resultat moyenne : %d", res);
}

float moyenne(float* tab [], float tabsize){
float res = 0;
float dep = *tab[0];
for (float i = 1; i < tabsize+1; i++ )
{
   res += (dep+i);  
}
res /= (float)tabsize;


return res;

}   

