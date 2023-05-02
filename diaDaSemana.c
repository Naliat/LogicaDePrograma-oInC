#include <stdio.h>

int main(){

    int diaDaSemana;
    printf("Digite um número de ( 1 a 7 ) para saber o dia da semana que ele corresponde. ");
    scanf("%d", &diaDaSemana);

if(diaDaSemana == 1){
    printf("Domingo");}
    else if(diaDaSemana == 2){
    printf("Segunda-Feira");}
    else if(diaDaSemana == 3){
    printf("Terca-Feira");}
    else if(diaDaSemana == 4){
    printf("Quarta-Feira");}
    else if(diaDaSemana == 5){
    printf("Quinta-Feira");}
    else if(diaDaSemana == 6){
    printf("Sexta-Feira");}
    else if(diaDaSemana == 7){
    printf("Sabado");}
    else{
    printf("Dia da semana invalido: ");
    }

    return 0;
}