#include <stdio.h>
#include <stdlib.h>
int main (){
    int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
     int contagem=0;
    unsigned char *p = NULL, *q;
    p = q = (unsigned char*) vetor;
    for (; p < q +sizeof(vetor); p++){
        if(*p==0xff)contagem++;
        printf("%p : %X\n", p ,*p);
    }
    printf("Bytes apenas com 1`s: %d\n", contagem);
    return 0;
return 0;
}
