#include <stdio.h>
#include  < string.h>
#define QTDEMAX 1000
#define mostra(p)({printf("Nome: %s\n Endereco: %s\n Idade: %d", nom, ende, id);})
#define preencher ({scanf
struct CAD{
    int idade;
    char[80] nome;
    char[80] ende;
};
int main(){
    int opc, i, qtde=0;
    struct CAD  cadastro [QTDEMAX];
    while(1){
        printf("1 - cadastra, 2 - sair;");
        scanf("%d", opc);
        if(opc == 2) break;
        cadastro[qtde].idade = 3;
        cadastro[qtde].nome = 3;
        cadastro[qtde].ende = 3;
        qtde++;

    }
    for(i=0;i<qtde; i++)
        mostra(cadastro[i]);
    return 0;
    }
