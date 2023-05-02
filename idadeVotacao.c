#include <stdio.h>

int main(){

    int idade;
    printf("Digite a sua idade. ");
    scanf("%d", &idade);
    if(idade >= 16){
        printf("Apto para a votacao, sua idade e: %d", idade);
    }else{
        printf("Nao apto para a votacao, sua idade e: %d", idade);
    }

    return 0;
}