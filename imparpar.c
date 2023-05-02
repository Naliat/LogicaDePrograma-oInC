#include <stdio.h>

int main(){

int number;
printf("Digite um numero. ");
scanf("%d", &number);

if(number % 2 == 0){
    printf("Esse numero e par");
}else{
    printf("Esse numero e impar");
}

return 0;
}