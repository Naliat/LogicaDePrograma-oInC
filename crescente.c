#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Digite 3 valores inteiros diferentes: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    if (a > c)
    {
        int temp = a;
        a = c;
        c = temp;
    }

    if (b > c)
    {
        int temp = b;
        b = c;
        c = temp;
    }

    printf("Os valores em ordem crescente sao: %d %d %d\n", a, b, c);

    return 0;
}
