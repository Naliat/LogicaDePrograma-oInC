#include <stdio.h>

int main()
{
    float peso, altura, imc;

    printf("Digite o seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f\n", imc);

    if (imc < 20)
    {
        printf("Abaixo do normal.\n");
    }
    else if (imc < 25)
    {
        printf("Normal.\n");
    }
    else if (imc < 30)
    {
        printf("Sobrepeso.\n");
    }
    else if (imc < 35)
    {
        printf("Obesidade leve.\n");
    }
    else if (imc < 40)
    {
        printf("Obesidade moderada.\n");
    }
    else
    {
        printf("Obesidade mórbida.\n");
    }

    return 0;
}
