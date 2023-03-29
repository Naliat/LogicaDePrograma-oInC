    #include <stdio.h>
    
    int main() {
        int segundos;
        printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);
    
    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    segundos = segundos % 60;
    
       printf("%d:%d:%d", horas, minutos, segundos);
    
        return 0;
    }
