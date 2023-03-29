#include <stdio.h>

int main() {
    float valorProduto, percentualDesconto, valorDesconto, valorComDesconto;
    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    printf("Digite o percentual do desconto: ");
    scanf("%f", &percentualDesconto);

    valorDesconto = valorProduto * (percentualDesconto / 100);
    valorComDesconto = valorProduto - valorDesconto;

    printf("O valor do produto é %.2f reais com desconto de %.2f%% fica por %.2f reais.\n", valorProduto, percentualDesconto, valorComDesconto);

    return 0;
}
