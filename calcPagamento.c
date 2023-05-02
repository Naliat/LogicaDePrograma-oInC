#include <stdio.h>

int main()
{
    float valorHora, horasTrabalhadas, salarioBruto, descontoIR, descontoINSS, fgts, descontos, salarioLiquido;

    printf("Digite o valor da hora trabalhada: R$ ");
    scanf("%f", &valorHora);

    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%f", &horasTrabalhadas);

    salarioBruto = valorHora * horasTrabalhadas;

    if (salarioBruto <= 900)
    {
        descontoIR = 0;
    }
    else if (salarioBruto <= 1500)
    {
        descontoIR = salarioBruto * 0.05;
    }
    else if (salarioBruto <= 2500)
    {
        descontoIR = salarioBruto * 0.1;
    }
    else
    {
        descontoIR = salarioBruto * 0.2;
    }

    descontoINSS = salarioBruto * 0.1;
    fgts = salarioBruto * 0.11;
    descontos = descontoIR + descontoINSS;
    salarioLiquido = salarioBruto - descontos;

    printf("\nsalario bruto ( %.0f * %.0f ) : R$ %.2f", valorHora, horasTrabalhadas, salarioBruto);
    printf("\n( - ) IR (%.0f%%) : R$ %.2f", descontoIR / salarioBruto * 100, descontoIR);
    printf("\n( - ) INSS (10%%) : R$ %.2f", descontoINSS);
    printf("\nFGTS (11%%) : R$ %.2f", fgts);
    printf("\nTotal de descontos : R$ %.2f", descontos);
    printf("\nsalario líquido : R$ %.2f", salarioLiquido);

    return 0;
}
