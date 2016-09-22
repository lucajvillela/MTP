#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main(){
    int i; float f; char c;
    printf("Entre com um inteiro:");
    recebe_dado('i', &i);
    printf("Entre com um float:");
    recebe_dado('f', &f);
    printf("Entre com um caractere:");
    recebe_dado('c', &c);
    printf("Para %d, o quadrado: %d\n", i, i*i);
    printf("Para %f, a raiz: %f\n", f, sqrt(f));
    printf("para %c, o caractere: %c\n", c, (islower(c)) ? toupper(c) : tolower(c));
    return 0;
}
void recebe_dado(char tipo, void * endereco){
    switch(tipo){
    case 'i': scanf("%d",(int*)endereco); break;
    case 'f': sacnf("%f",(float*)endereco); break;
    case 'd': scanf("&lf",(double*)endereco); break;
    case 'c': scanf("%c",(char*)endereco); break;
    case 's': fgets((char*)endereco, n , stdin);endereco [strlen(endereco)-2]='\0'; break;
    }
    while((c=getchar())!= EOF && c != '\n');
}
