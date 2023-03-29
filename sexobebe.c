#include <stdio.h>

int main(){
    char sexo;
    
    printf("Digite (F) para menina e (M) para menino: ");
 scanf("%c", &sexo);
 
 if (sexo == 'M') {
     printf("Menino\n" );
 }else if (sexo == 'F' ) {
     printf("Menina\n");
 }
 return 0;
 
}