#include <stdio.h>

int main() {
    int A[10] , M[10], X, i;


    printf("escreva o valor do número X ->  ");
    scanf("%d",&X);
    for(i=0; i<10 ;i++){
        printf("\nescreva o numero %d  ->  ", i+1);
        scanf("%d",&A[i]);
    }
    
    for(i=0; i<10; i++){
        M[i] = A[i] * X;
    }

    for(i=0; i<10; i++){
    printf("\nA multiplicação entre o %d X %d = %d", A[i], X, M[i]);
    }
    
}
