#include <stdio.h>
int main(){
    int diaNasc, mesNasc, anoNasc;
    int diaAtual, mesAtual, anoAtual;
    int idade;
    
    printf("Digite o dia, mes e ano de nascimento");
    scanf("%d/%d/%d", &diaNasc, &mesNasc, &anoNasc);
    printf("Digite o dia, mes e ano atual");
    scanf("%d/%d/%d", &diaAtual, &mesAtual, &anoAtual);
    
    idade = anoAtual - anoNasc;
    
    if (mesAtual < mesNasc || (mesAtual == mesNasc && diaAtual < diaNasc)) {
        idade--;
    }
    
    printf("Voce tem %d anos\n " , idade);
    
    return 0;
    
    
    
}