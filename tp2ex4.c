
#include <stdio.h>
#include <string.h>





void complement(char *chain, int len){


for(int i =0;  i<len; i++){
if (*(chain+i) == '1'){
    *(chain+i) = '0';
}
else{
    *(chain+i) = '1';


}

}
printf("%s", chain);
}


void main(){
char str [8];
scanf("%s", str);
int len = strlen(str);

complement(str, len);


    


}