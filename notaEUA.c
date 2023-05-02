#include <stdio.h>

int main()
{
    float nota1, nota2, media;
    printf("Digite as duas notas: ");
    scanf("%f %f", &nota1, &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 9.0)
    {
        printf("Sua nota foi A ");
    }
    else if (media >= 7.5)
    {
        printf("Sua nota foi B ");
    }
    else if (media >= 6.0)
    {
        printf("Sua nota foi C ");
    }
    else if (media >= 4.0)
    {
        printf("Sua nota foi D ");
    }
    else if(media >= 0)
    {
        printf("Sua nota foi E ");
    }else{
        printf("Nota invalida: ");
    }
    return 0;
}
