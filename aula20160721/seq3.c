#include <stdio.h>
int main(){
    float nota_a,nota_b,nota_c,media;
    printf("entre com as notas A B e C do aluno:");
    scanf("%f",&nota_a);
    scanf("%f",&nota_b);
    scanf("%f",&nota_c);
    media=(2*nota_a+3*nota_b+5*nota_c)/10;
    printf("a media das notas do aluno e: %.1f", media);
    return 0;
}
