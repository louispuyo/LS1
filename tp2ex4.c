
#include <stdio.h>
#include <string.h>


int lenChain(char s []) {
    char Tocompare[] = ""; 
    int i;

for (i=0; Tocompare != s; i++ ){
    Tocompare[i] = s[i];
}
int len = i-1;
return len;
}


void complement(char chain []){

int len = lenChain(chain);
for(int i =0;  i>len; i++){
if (chain[i] = 1){
    chain[i] = 0;
}
else{
    chain[i] = 0;


}

}

}


void main(){
char str;
scanf("%s", &str);
char chain [] = str;
    


}