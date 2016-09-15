#include <stdio.h>
#include <math.h>
#define recebe(c,p) \
    ({ printf ("entre com coord x do ponto %s:",c); \
    scanf("%f",&p.x); \
    printf ("entre com coord y do ponto %s:",c); \
    scanf("%f",&p.y); })
#define mostra(p) \
    ({printf("(%g; %g)\n", p.x, p.y); })
#define soma(a,b,s) \
    ({s.x = a.x = b.x; \
      s.y = a.y + b.y; })
#define distancia(a,b) \
    sqrt(pow(a.x-b.x,2.0)+pow(a.y-b.y,2.0))
struct  ponto{
    float x;
    float y;
};
int main(){
    struct ponto A, B, S;
    float Distancia;
    recebe("A",  A);
    recebe("B", B);
    mostra(A);
    mostra(B);
    Distancia = distancia(A,B);
    printf("A distancia entre eles: %g", Distancia);
return 0;
}
