#include <stdio.h>

int main (){
    float numero1, numero2, resultadoFinal;
    char operador;
    printf("Digite o operador (+, /, -, *, %%) ");
    scanf("%c", &operador);

    printf("Digite o primeiro número ");
    scanf("%f", &numero1);

printf("Digite o segundo número ");
    scanf("%f", &numero2);

switch (operador) {
     case '+':
            resultadoFinal = numero1 + numero2;
            printf("%.2f\n", resultadoFinal);
            break;
    case '-':
            resultadoFinal = numero1 - numero2;
            printf("%.2f\n", resultadoFinal);
            break;
    case '*':
            resultadoFinal = numero1 * numero2;
            printf("%.2f\n", resultadoFinal);
            break;
    case '/':
            if (numero2 == 0) {
                printf("Operacao invalida\n");
            } else {
                resultadoFinal = numero1 / numero2;
                printf("%.2f\n", resultadoFinal);
            }
            break;
        default:
            printf("Operacao invalida\n");
    }

    return 0;
 }
