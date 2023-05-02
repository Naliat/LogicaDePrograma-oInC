#include <stdio.h>

int main(){

    int idade;

    printf("Digite a sua idade. ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("Possui a idade para dirigir, sua idade e: %d", idade);
    }else{
        printf("Nao possui idade para dirigir, sua idade e: %d", idade);
    }
    return 0;
}