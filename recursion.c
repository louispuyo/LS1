#include <stdio.h>

// pour percer dans le pera ya pas de shortcut

void rec(int n){
    
    if (n>0){

    printf("%d ... ",n);


    rec(n-1);
    }
    
}

typedef struct wallet
{
    char * pname, name;
    char currency;
    int code;
    float pnl;
 } w[20];



struct pers {
    char name[10];
    int age;

};

int main()
{
    struct pers *ptr, Harry;
    ptr = &Harry;
    ptr->age = 23;
    printf("harry a %d ans ", ptr->age);

    for (int i = 1; i<=20; ++i){
        printf("%d  - ", i);
    }

    return 0;
}

