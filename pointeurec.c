
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int puissance(int nb, int p){

    int i;
    int res = nb;
    for (i = 1; i<p; i++){
        res *= nb; 
    }
    return res;
}

void main(){
    char c [3];
    char *ptr;
    int R = 0;
    ptr = c;
    printf("entrer nombre binaire : ");
    scanf("%s", c);
    
    char *tmp;
    tmp = &c[0];


    for (int i = 0; i < 3; i++){
        
        char w = c[i];

        

        R += puissance(2,pw);
    }

    
    printf("%d", R);
        /* code */
    
    
}

// 