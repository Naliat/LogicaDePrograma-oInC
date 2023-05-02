#include <stdio.h>

int main(){

    int senha = 1234, usuario;
    printf("Digite a senha: ");
    scanf("%d", &usuario);

    if(senha == usuario){
        printf("Acesso permitido!! ");
    }else{
        printf("Acesso negado!! ");
    }

    return 0;
}