#include <stdio.h>

int main(){
    
    int number;
    
    printf("Digite o número para saber se ele é multiplo de 7: ");
    scanf("%d", &number);
    
    if( number % 7 == 0) {
        printf("SIM\n");
    }else{
        printf("NÃO É MULTIPLO DE 7\n");
    }
}