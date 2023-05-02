#include <stdio.h>
int main(){

    float quantidade, macas;
    printf("Digite a quantidade de macas: ");
    scanf("%f", &quantidade);

    if(quantidade < 12){
        macas = quantidade * 0.30;
    }else{
        macas = quantidade * 0.25;
    }
    printf("Essa e o valor das macas:  R$ %.2f", macas);

    return 0;
}