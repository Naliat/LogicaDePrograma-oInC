#include <stdio.h>

int main() {
    int n, d, q, r;

    printf("Digite o dividendo e o divisor: ");
    scanf("%d %d", &n, &d);

    q = n / d;  
    r = n % d;  

    printf("O quociente da divisão é: %d\n", q);
    printf("O resto da divisão é: %d\n", r);

    return 0;
}
