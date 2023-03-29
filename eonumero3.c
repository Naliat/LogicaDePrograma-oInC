#include <stdio.h>

int main() {
    int number;
    printf("Digite um inteiro e tente acertar o número secreto: ");
    scanf("%d", &number);

    if (number == 3) {
        printf("Parabéns, você acertou o número secreto!!\n");
    }else{
        printf("Número errado! Tente novamente: ");
    }

    return 0;
}
