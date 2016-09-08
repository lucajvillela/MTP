#include <stdio.h>
#include <stdlib.h>
int main (){
    double n, n1, soma;

    printf("digite dois numeros reais:");
    scanf("%lf",&n);
    scanf("%lf",&n1);
    printf("Numero:%p : %lf\nNumero:%p : %lf\n", &n, n, &n1, n);
    soma = n + n1;
    printf("A soma e: %p : %lf", &soma, soma);
return 0;
}
