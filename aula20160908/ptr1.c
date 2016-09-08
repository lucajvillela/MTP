#include <stdio.h>
int main(){
    unsigned int numero = 0xFACA8421;
    printf("%p : %u\n", &numero, numero);
    return 0;
}
