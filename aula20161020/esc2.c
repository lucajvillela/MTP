#include <stdio.h>
#include <time.h>
#include <string.h>
void gravarArq();
void gravaTexto();
int main(){
srand(time(0));
int i; int j;
for (j=0;j<=i;j++){

}//descobrir uma forma de criar um numero aleatorio e gravar em um local da string, pra cada valor de j
char nomearq[256];
printf("Nome do arquivo:");
scanf("%s", nomearq);
return 0;
}

void gravarArq(char * filename){
    FILE * arquivo;
    arquivo = fopen(filename, "w");
    fprintf(arquivo, "funcionou!\n");
    fclose(arquivo);
}
void gravaTexto(char * texto,int tamanho){
    FILE * arquivo;
    int i;
    arquivo=fopen("meutexto.txt","a");
    if(arquivo==NULL)
        fprintf(stderr,"Erro na gravacao do arquivo.\n");
    else{
        for(i=0;i<tamanho;i++)
            fputc(texto[i], arquivo);
        fclose(arquivo);
    }
}
