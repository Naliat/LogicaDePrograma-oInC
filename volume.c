#include<stdio.h>
#include<math.h>

int main()
{
    float altura, raio, pi, formula;
    
    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o raio: ");
    scanf("%f", &raio);

    printf("Digite o pi: ");
    scanf("%f", &pi);
    
    formula = (pi/3) * pow(altura, 2) * (3 * raio - altura);
    
    printf("%f", formula);
}