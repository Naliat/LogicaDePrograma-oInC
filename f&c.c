#include <stdio.h>

int main(){
    float celsius, fahrenheit;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 1.8) + 32;
    
printf("%.2f C = %.2f F\n", celsius, fahrenheit);
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit -32) / 1.8;
printf("%.2f F = %.2f C\n", fahrenheit, celsius);
  
    return 0;

}