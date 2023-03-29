#include <stdio.h>

int main(){
    
    int dia, mes, ano, idade;
    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    printf("Digite o idade: ");
    scanf("%d", &idade);
     
    printf("Voce nasceu no dia %d do mes %d no ano %d e hoje tem %d anos\n", dia, mes, ano, idade);
     
     return 0;
     
}