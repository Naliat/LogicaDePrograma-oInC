#include <stdio.h>
#include <math.h>

int main (){
    float capital, tjuros,tempo, montante, juros, rendimento;
    printf("Digite o capital: ");
    scanf("%f", &capital);

    printf("Digite o juros: ");
    scanf("%f", &tjuros);
    
    printf("Digite o tempo: ");
    scanf("%f", &tempo);

montante = capital * pow(1 + (tjuros / 100 ), tempo);
juros = montante - capital;
rendimento = (juros / capital) * 100;

 printf("A aplicacao rendeu %.2f reais que equivale a um rendimento percentual de %.2f%%.\n", juros, rendimento);
    
    return 0;
    
}