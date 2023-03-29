


#include <stdio.h>

int main() {
    float peso, altura, num_juventude;
    int idade, ano_nascimento, dia_nascimento;

    printf("Digite o peso: ");
    scanf("%f", &peso);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Digite o dia de nascimento: ");
    scanf("%d", &dia_nascimento);

    num_juventude = (peso + altura) / idade + ano_nascimento;
    num_juventude *= dia_nascimento;

    printf("O número da juventude é: %f\n", num_juventude);

    return 0;
}
