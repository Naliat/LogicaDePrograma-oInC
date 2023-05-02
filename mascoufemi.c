#include <stdio.h>

int main(){

    char sexo;
    printf("Digite (F) -> Feminino e (M) -> Masculino. ");
    scanf("%c", &sexo);

if(sexo == 'F'){
    printf("Feminino");
}else if(sexo == 'M'){
    printf("Masculino");
}else{
    printf("Sexo invalido");
}

    return 0;
}