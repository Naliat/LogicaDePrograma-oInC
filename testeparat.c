#include <stdio.h>
#include  <math.h>

int main(){
    double x1, y1, x2, y2, distancia;
    
printf("Digite a coordenada X e coordenada Y do primeiro ponto");
    scanf("%lf %lf", &x1, &y1);
printf("Digite a coordenada X e coordenada Y do segundo ponto");
    scanf("%lf %lf", &x2, &y2);

distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

printf("%.2lf\n", distancia);

return 0;

    
    
}
