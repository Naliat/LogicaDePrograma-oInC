#include <stdio.h>

int main()
{

    int dia, mes, ano;

    printf("Digite sua data, mes e ano de nascimento respectivamente. ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (dia < 1 && dia > 31)
    {}else if(mes < 1 && mes > 12)
    {}else if(ano > 2000)
    {}else{printf("data valida");}
   

    printf("Voce nasceu no dia %d do %d de %d", dia, mes, ano );
    return 0;
}