#include <stdio.h>

int main(){
    
    
    int number;
    
printf("Digite o número para saber se ele é maior ou igaula a 16: ");
    scanf("%i", &number);
    
    if (number >= 16) {
        printf("SIM\n");
    }else {
        printf("MENOR\n");
    }
}