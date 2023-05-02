#include <stdio.h>

int main()
{
    float salario, aumento, novo_salario;
    int percentual;

    printf("Digite o salário atual: ");
    scanf("%f", &salario);

    if (salario <= 280)
    {
        aumento = salario * 0.2;
        percentual = 20;
    }
    else if (salario <= 700)
    {
        aumento = salario * 0.15;
        percentual = 15;
    }
    else if (salario <= 1500)
    {
        aumento = salario * 0.1;
        percentual = 10;
    }
    else
    {
        aumento = salario * 0.05;
        percentual = 5;
    }

    novo_salario = salario + aumento;

    printf("Salário antes do reajuste: R$%.2f\n", salario);
    printf("Percentual de aumento aplicado: %d%%\n", percentual);
    printf("Valor do aumento: R$%.2f\n", aumento);
    printf("Novo salário após o aumento: R$%.2f\n", novo_salario);

    return 0;
}
