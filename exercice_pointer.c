#include <stdio.h>
#include <stdlib.h>



void swap(int *a){
    int temp;
    temp = *a;
    printf("%d", temp);

}

void main(){

    int* pt;
    int tab [5] = {3,4,1,2,7};
    float* ptr ;
    ptr = (float*) malloc(100 * sizeof(float));
    

    pt = &tab[0];

    for (int i = 0; i<5; i++){
    // !printf("%d \n", *(pt+i));
    swap(pt);
    
    if (*(pt+i) > *(pt)){
        *(pt+i) = *pt;
            // printf("%d \n", *(pt+i));

            }


    }


}