#include <stdio.h>

int main() {
    float renda;
    printf("Digite a renda: ");
    scanf("%f", &renda);

    if (renda <= 324) {
        printf("Extremamente pobre\n");
    } else if (renda <= 648) {
        printf("Pobre\n");
    } else if (renda <= 1164) {
        printf("Vulneravel\n");
    } else if (renda <= 1764) {
        printf("Baixa classe media\n");
    } else if (renda <= 2564) {
        printf("Media classe media\n");
    } else if (renda <= 4076) {
        printf("Alta classe media\n");
    } else if (renda <= 9920) {
        printf("Baixa classe alta\n");
    } else {
        printf("Alta classe alta\n");
    }

    return 0;
}
