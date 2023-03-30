#include <stdio.h>

int main(){
    char tipo_pessoa;
    float ganho_anual, lucro_anual, desconto, imposto;
    
    scanf("%c", &tipo_pessoa);
    
    if(tipo_pessoa == 'F') {
        scanf("%f", &ganho_anual);
        if (ganho_anual <= 13000){
            imposto = 0.0;
        } else {
            imposto = ganho_anual * 0.15;
        }
    } else if (tipo_pessoa == 'J') {
        scanf("%f", &lucro_anual);
        scanf("%f", &desconto);
        
        imposto = (lucro_anual * 0.25) - desconto;
}

 printf("%.2f\n", imposto);

return 0;
}