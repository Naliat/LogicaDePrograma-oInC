#include <stdio.h>

int main()
{

    int number = 0;

    printf("Digite um numero. ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("Maior que 0: %d \n", number);
    }
    else if (number < 0)
    {
        printf("Menor que 0: %d", number);
    }
    else
    {
        printf("O numero é igual a 0: %d",number);
    }

    return 0;
}