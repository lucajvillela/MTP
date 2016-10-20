#include <stdio.h>
#define NCHAR 256
void gravarDados();
void lerDados();
int main() {
    int opcao;
    do{
        printf("==||==||==||==\n");
        printf("1-Escrever informacoes\n");
        printf("2-ler informacoes\n");
        printf("0-Sair\n");
        scanf("%d", &opcao);getchar();
        if(opcao==1)
            gravarDados();
        if(opcao==2)
            lerDados();
    }while(opcao);
    return 0;
}

void gravarDados(){
    FILE * arquivo;
    char nome[NCHAR];
    int idade;
    float altura;
    printf("entre com o nome:");
    fgets(nome, NCHAR, stdin); nome[strlen(nome)-1]='\0';
    printf("entre com a idade:");
    fscanf(stdin,"%d",&idade);
    printf("entre com a altura:");
    fscanf(stdin,"%f",&altura);
    arquivo=fopen("info.txt","w");
    fprintf(arquivo,"%s\n%d\n%f\n", nome, idade, altura);
    fclose(arquivo);
}

void lerDados(){
    FILE * arquivo;
    char nome[NCHAR];
    int idade;
    float altura;
    arquivo=fopen("info.txt","r");
    if(arquivo==NULL)
        fprintf(stderr,"arquivo nao encontrado");
    else{
    fgets(nome, NCHAR, arquivo);nome[strlen(nome)-1]='\0';
    fscanf(arquivo,"%d\n%f\n", &idade, &altura);
    fclose(arquivo);
    printf("nome:");
    fprintf(stdout, "%s\n", nome);
    printf("idade:");
    fprintf(stdout,"%d\n",idade);
    printf("altura:");
    fprintf(stdout,"%f\n",altura);
    }
}
