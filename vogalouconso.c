#include <stdio.h>

int main(){

    char letra;
    printf("Digite uma letra para saber se ela e vogal ou cosoante: ");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' )
    {
        printf("Vogal");
            }else{
        printf("Cosoante");
            }

            return 0;
}