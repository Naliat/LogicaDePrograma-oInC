#include <stdio.h>

int main()
{
    float p1, p2, p3, total, v1, v2, v3;
    scanf("%f %f %f", &p1, &p2, &p3);
    scanf("%f", &total);

    v1 = total * p1 / 100;
    v2 = total * p2 / 100;
    v3 = total * p3 / 100;

    printf("%.2f\n", v1);
    printf("%.2f\n", v2);
    printf("%.2f\n", v3);

    return 0;
}
