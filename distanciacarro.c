#include <stdio.h>

int main() {
  float tempo, velocidade, distancia, litros;

 printf("Digite o tempo: ");
  scanf("%f", &tempo);

printf("Digite a velocidade: ");
  scanf("%f", &velocidade);

  distancia = tempo * velocidade;
  litros = distancia / 12;

  printf("A distância percorrida foi de %.2fKM/h com o consumo de %.2fL.\n", distancia, litros);

  return 0;
}
