#include <stdio.h>

int main() {
    int A[30] , X, i, contador = 0;


    for(i=0; i<30 ;i++){
        printf("\nescreva o numero %d do vetor A  ->  ", i+1);
        scanf("%d",&A[i]);
    }

    printf("\nescreva o valor do número X para verificar se existe no vetor A ->  ");
    scanf("%d",&X);
     for(i=0; i<30; i++){
        if(A[i] == X){
            contador++;
        } 
    }

    printf("\n A quantidade de vezes X aparece em A[] e %d", contador);

}
