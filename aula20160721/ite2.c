#include <stdio.h>
#include <time.h>
int main(){
    int base, potencia, i, resultado;
    printf("Entre com uma base e uma potencia:");
    scanf("%d",&base);
    scanf("%d",&potencia);
    resultado=1;
    for(i=1;i<=potencia;i++)
        resultado=resultado*base;
    printf("a potencia de %d e igual a %d. \n",base,resultado);

    return 0;
}

