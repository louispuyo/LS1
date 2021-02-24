#include <stdio.h>



void main()
{
    int* pa, *px, x [5], array [3] = {1,4,2};
    px = (float*) malloc(100 * sizeof(float));

    pa = &array[0];
    px = &x[0];
    printf("code : %d \n", *pa);
    for (int i = 0; i<5; i++){
    printf("enter val %d : ", i+1);
    scanf("%d", x+i);

    }
     for (int i = 0; i<5; i++) 
     {

    printf("val %d \n", *(px+i));

     } 

}