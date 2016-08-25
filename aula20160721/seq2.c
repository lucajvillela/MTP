#include <stdio.h>
#include <time.h>
int main() {
    float base_t, altura_t, area_t;
    printf("Entre com a base e altura do triangulo respectivamente:");
    scanf("%f",&base_t);
    scanf("%f",&altura_t);
    //scanf("%f, %f",&base_t,&altura_t);
    area_t = (base_t*altura_t)/2;
    printf("A area do triangulo e: %.2f",area_t);
    return 0;
}

