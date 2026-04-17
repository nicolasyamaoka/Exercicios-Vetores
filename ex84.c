#include <stdio.h>

int main() {
    int N, i;
    int A[N] , B[N], soma[N];


    printf("escreva o valor do tamanho dos vetores ->  ");
    scanf("%d",&N);

    for(i=0; i<N ;i++){
        printf("escreva o numero %d do vetor A  ->  ", i+1);
        scanf("%d",&A[i]);
    }

    printf("\n");

    for(i=0; i<N ;i++){
        printf("\nescreva o numero %d do vetor B  ->  ", i+1);
        scanf("%d",&B[i]);
    }
    
    for(i=0; i<N; i++){
        soma[i] = A[i] + B[i];
    }

    for(i=0; i<N; i++){
    printf("\nA soma entre o %d + %d = %d", A[i], B[i], soma[i]);
    }
    
}
