// Online C compiler to run C program online
#include <stdio.h>




#include <stdio.h>

#include <stdlib.h>




typedef struct {
char str;
int entier;

    
} Tuple;



void checksize(char binaire [8])
{
    
int sig = 3;

    if (binaire[0] == '1'){
        sig = 1;
    }else{
        if (binaire[0] == '0'){
            sig = 0;
        }
    }

if (sig == 1){
    
        printf("nombre negatif");
    
}else{ if (sig == 0){
    printf("nombre positif");
}

}
}
void main (){

char binaire [8];
printf("entrer un binaire sur 8b : ");
scanf("%s", binaire);
// printf("%s", binaire);
checksize(binaire);

}


