#include <stdio.h>

int main(){

    float ap1, ap2, mediaNota;
    printf("Digite suas notas para saber sua media. ");
    scanf("%f %f", &ap1, &ap2);

    mediaNota = (ap1 + ap2) / 2;

if(mediaNota >= 7 && mediaNota <=8){
    printf("Aprovado %.2f", mediaNota);
}else if(mediaNota == 10){
    printf("Aprovado com distincao %.2f", mediaNota);
}
else{
printf("Reprovado %.2f", mediaNota);
}
    return 0;
}