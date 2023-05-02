#include <stdio.h>

int main(){
    int idade;
    printf("Digite sua idade. ");
    scanf("%d", &idade);

    if(idade >= 16 && idade >= 18){
        printf("Voce pode votar e dirigir! ");
    }else if(idade <16 ){
        printf("Voce nao pode dirigir nem votar! ");
    }else if(idade >= 16){
        printf("Voce pode votar, mas nao pode dirigir! ");
    }else{
        printf("Mensagem nao aceita: %d", idade);
    }
    return 0;
}