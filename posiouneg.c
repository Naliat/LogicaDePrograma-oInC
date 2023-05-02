#include <stdio.h>

int main(){

    int number;
    printf("Digite um numero. ");
    scanf("%d", &number);
if(number >= 0 ){
    printf("Positivo");
}else{
    printf("Negativo");
}
    return 0;
}