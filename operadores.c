#include <stdio.h>

int main(){
    char operadores;
    
    printf("Digite o operador (+, /, -, *, %%) ");
 scanf("%c", &operadores);
 
 if (operadores == '+') {
     printf("Soma");
 }else if (operadores == '-' ) {
     printf("Subtracao");
 }else if (operadores == '*'){
     printf("Multiplicacao");
 }else if (operadores == '/' ) {
     printf("Divisao");
 }else if (operadores == '%'){
     printf("Resto da divisao");
 }
 else{
     printf("NDA");
 }
 return 0;
 
}