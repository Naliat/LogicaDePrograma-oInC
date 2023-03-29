#include <stdio.h>

int main() {
    float peso, altura;
    int idade, ano_nasc, dia_nasc;
    
    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    printf("Digite o seu ano de nascimento: ");
    scanf("%i", &ano_nasc);

    printf("Digite o seu dia de nascimento: ");
    scanf("%i", &dia_nasc);
    
    
    float formula = (((((peso + altura)/idade) + ano_nasc) * dia_nasc) -33) * (idade + 7);
    printf("O resultado é %f", formula);

    return 0;
}
