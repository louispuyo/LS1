#include <stdio.h>



int sommeBin(int nb1 [], int nb2 []){
       int somme [18];
       int retenu [18];
      retenu[0] = (int)(nb1[15] + nb2[15])/2;
       

       for(int i = 0; i < 16; i++){
    
       somme[i] = (nb1[i]+nb2[i]);



       }



       for (int j = 0; j < 18; j++){

           int tmp = somme[j];
           somme[j] = somme[j]%2;
           somme[j+1] += (int)tmp/2;

       }





        //  printf("%d", somme[i-1]); 

 
            

    
    

    for(int i = 17 ; i >=0; i--){
       
        printf("%d", somme[i]); 
    }
    return 0;


}

void main (){
    int tab1 [16] = {1,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1};
    int tab2 [16] = {0,1,1,0,1,0,1,1,1,1,0,1,0,1,1,0};
    sommeBin(tab1, tab2);
    
   

}
