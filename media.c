#include <stdio.h>

int main() {
    float nota1, nota2, media;
    
    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Sua media foi %.2f", media);

    return 0;
}
