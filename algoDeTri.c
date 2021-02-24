
#include <stdio.h>



void rule (int* tab1 [10], int* tab2 [10], int* retenuTab [10]){

    int retenu = 0;

    for(int i = 0; i < 10; i++){

         if((*tab1[i]+*tab2[i]) > 1){
            if (retenu){
            retenu = 0;
            }else{
            retenu = 1;
            }
        } 
       *retenuTab[i] = (int) retenu;

    }
    
}

int pointer(){
//   int* p, c;
  int c = 2;
  int* ptrTaille, taille;
  taille = 10;
  int tableau [10] = {1,0,0,1,0,1,1,1,0,1};
  int tableau2 [10] = {1,0,0,1,0,1,1,1,0,1};
  int result [15]; 
  int retenuTab [10] = {0,0,0,0,0,0,0,0,0,0};

  rule(&tableau, &tableau2, &retenuTab);
  for (int i = 0; i < taille; i++){
      printf("[%d]", retenuTab[i]);

  }


  return 0;

  

  
  // c et *p sont des valeurs

  // &c et p sont des address




}

int main()
{
    pointer();
    return 0;

}




