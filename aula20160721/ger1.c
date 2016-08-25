#include <stdio.h>
#include <time.h>
int main(){
    int numero, numeroa,numerob, i;
    srand(time(0));
    rand()%100;
    numeroa=rand()%100;
    i==0;
    printf("entre com um numero:");
    scanf("%d",&numero);
    while(numero!=numeroa){
    if(numero<numeroa){
        printf("baixo");
        i++;
        printf("digite outro numero");
        scanf("d%",numerob);
        numero=numerob;
    }
    if(numero>numeroa){
        printf("alto");
        i++;
        printf("digite outro numero");
        scanf("d%",numerob);
        numero=numerob;
    }
}
    printf("ganhou com %d tentativas",&i);

    return 0;
}
