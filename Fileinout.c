
#include <stdio.h>

#include <stdlib.h>



typedef struct FileClass
{

}ListCLass;


typedef struct ContentClass
{
    int len;
    char str[60];
    int digits[12];



}Clist;


struct ContentClass getinfo();


int main () {
    int num;
    FILE *fptr;
    char content [20];
    Clist cl;
    cl = getinfo();

    printf("\nDisplaying information\n");
    printf("content: %s", cl.str);
    printf("\n Numbers: %d", cl.digits[0]);
    fptr = fopen("/mnt/c/Users/louis/OneDrive/Bureau/Programmation/LS1/C/CC1.TXT", "r");

    
    if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }


//    fseek(fptr, -sizeof(struct threeNum), SEEK_END);
// for (int i = 0; i<20; i++){

//     fscanf(fptr,"%c", &content[i]);
    

    
        
//     printf("%c", content[i]);
    
// }
//     fclose(fptr);


}


struct ContentClass getinfo()
{
    struct ContentClass c1;
     printf("Enter name: ");
    scanf ("%[^\n]%*c", c1.str);

    printf("Enter age: ");
    scanf("%d", &c1.digits[0]);
  
     return c1;
     
}
            