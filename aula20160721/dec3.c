#include <stdio.h>
#include <time.h>
int main(){
    int d1, d2, d3, soma;
    srand(time(0));
    rand()%6+1;
    rand()%6+1;
    rand()%6+1;
    d1=rand()%6+1;
    d2=rand()%6+1;
    d3=rand()%6+1;
    soma= d1+d2+d3;
    printf("Os dados tiraram  %d , %d , %d. \n",d1,d2,d3);
    printf("a soma foi de %d.\n",soma);
    if(soma>=7&&soma<=11)
        printf("o jogador ganhou");
    else
        printf("o jogador perdeu");

    return 0;
}
