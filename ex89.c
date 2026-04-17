#include <stdio.h>

int main() {
    int V1[15] , V2[15], X, i, contador = 0;

  
    for(i=0; i<15 ;i++){
        printf("\nescreva o numero %d do vetor V1  ->  ", i+1);
        scanf("%d",&V1[i]);
    }

    for(i=0; i<15 ;i++){
        printf("\nescreva o numero %d do vetor V2  ->  ", i+1);
        scanf("%d",&V2[i]);
    }

    for(i=0; i<20; i++){       
        if(V1[i] == V2[i]){
            contador++;
        }
    }

    printf("\n A quantidade de vezes que V1 e V2 tem mesmo número na mesma posição e %d", contador);

}
