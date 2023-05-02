#include <stdio.h>

int main(){
    char periodo;
    printf("Digite a inicial dos periodos para saber a qual voce pertence. (M, V e N)");
    scanf("%c", &periodo);

if(periodo == 'M'){
    printf("Matutino");


}else if(periodo == 'V'){

    printf("Vespertino");


}else if(periodo == 'N'){

    printf("Noturno");
}else{
    printf("Periodo invalido ");
}

    return 0;
    3 
}