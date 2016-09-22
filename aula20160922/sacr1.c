#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int pega_carta();
char figura_carta(int carta);
int main()
{
    srand(time(0));
    int carta1 = pega_carta(), carta2 = pega_carta();
    int i, ncartas, carta, soma=0;
    printf("quantas cartas vc quer?");
    scanf("%d", &ncartas);
    for(i=0;i<ncartas;i++){
        carta=pega_carta();
        printf("%c ", figura_carta(carta));
        soma=soma + ((carta > 10)? 10: carta);
    }
    if (soma>21)
        printf("\nvc perdeu!\n");
    else{
        printf("\nbanca:%c %c\n,", figura_carta(carta1), figura_carta(carta2));
        if(soma>((carta1 > 10)? 10: carta1) + ((carta2 > 10)? 10: carta2))
            printf("vc ganhou");
        else
            printf("vc perdeu");
    }
    return 0;
}
int pega_carta(){
    int carta = rand()%13 + 1;
    return carta;
}

char figura_carta(int carta){
    char figura;
    switch(carta){
        case 1: figura = 'A';
        case 10: figura = 'D';
        case 11: figura = 'J';
        case 12: figura = 'Q';
        case 13: figura = 'K';
        default: figura = 48 + carta;
        }
        return figura;
}
