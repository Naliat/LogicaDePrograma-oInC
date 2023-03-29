#include <stdio.h>

int main(){
    int number;

    printf("Digite um número inteiro para saber se ele é positivo ou negativo ou nulo.");
 scanf("%d", &number);
 
 if (number > 0) {
     printf("+\n" );
 }else if (number < 0 ) {
     printf("-\n");
 }else{
     printf("%d", number);
 }
 return 0;
 
}