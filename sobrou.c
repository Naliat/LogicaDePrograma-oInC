    #include <stdio.h>
    
    int main() {
        int qtd[3];
        float preco[3]; 
        float dinheiro; 
        float total = 0; 
        float troco; 
        
        scanf("%d %d %d", &qtd[0], &qtd[1], &qtd[2]);
        scanf("%f %f %f", &preco[0], &preco[1], &preco[2]);
        scanf("%f", &dinheiro);
        total = qtd[0]*preco[0] + qtd[1]*preco[1] + qtd[2]*preco[2];
        troco = dinheiro - total;
        printf("%.2f\n", troco);
    
        return 0;
    }
