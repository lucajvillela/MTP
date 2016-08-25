#include <stdio.h>
#include <time.h>
int main() {
    float lado_quadrado, area_quadrado;
    printf("Entre com o lado do quadrado:");
    scanf("%f",&lado_quadrado);
    area_quadrado = lado_quadrado*lado_quadrado;
    printf("A area do quadrado e: %.2f", area_quadrado);
    return 0;
}
