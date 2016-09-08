
#include <stdio.h>
#include <stdlib.h>
int main (){
        int i=0, vet[10], n, aux, j=10;
        for (i;i<10; i++){
            printf("digite o termo %d: ", i+1 );
            scanf("%d", &vet[i]);
        }
        for(i=0, j=9;j>=5;j--,i++){

           aux = vet[j];
           vet[j]= vet[i];
           vet[i] = aux;
           }
        for(i=0;i<10;i++)
            printf("%d ", vet[i]);

return 0;
}
