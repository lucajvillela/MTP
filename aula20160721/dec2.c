#include <stdio.h>
#include <time.h>
int main(){
    srand(time(0));
    int numero_u, numero_a,soma;
    rand()%2;
    numero_a = rand()%2;

    printf("entre com um numero:");
    scanf("%d",&numero_u);
    soma=numero_a+numero_u;
    if(soma%2==0)
        printf("O numero e par.\n");
    else printf("o numero e impar. \n");

    return 0;
}
