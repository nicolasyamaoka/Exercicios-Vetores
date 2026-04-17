#include <stdio.h>

int main() {
    int A[20] , B[20], X, i, contador = 0;


  
    for(i=0; i<20 ;i++){
        printf("\nescreva o numero %d do vetor A  ->  ", i+1);
        scanf("%d",&A[i]);
    }

    printf("\nescreva o valor do número X para verificar se existe no vetor A ->  ");
    scanf("%d",&X);
     for(i=0; i<20; i++){
        
        if(A[i] == X){
            B[i] = 0;
            contador++;
        } else {
            B[i] = A[i];
        }
    }

    if(contador > 0){
        printf("\ntivemos %d números em A[] iguais a %d", contador, X);
        for(i=0;i<20;i++){
            printf("\n%d",B[i]);
        }
    } else {
        printf("Nenhum valor se repetiu");
    }


}
