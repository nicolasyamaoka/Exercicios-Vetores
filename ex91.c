#include <stdio.h>

int main() {
    int VET[10], i, j;
    int p[20], contador = 0;

    for(i = 0; i < 10; i++){
        printf("\nEscreva o numero %d do vetor VET -> ", i + 1);
        scanf("%d", &VET[i]);
    }

    for(i = 0; i < 9; i++){
        for(j = i + 1; j < 10; j++){
            if(VET[i] == VET[j]){
                p[contador++] = i;
                p[contador++] = j;
            }
        }
    }

    printf("\nAs posicoes dos numeros que se repetem sao:");
    for(i = 0; i < contador; i += 2){
        printf("\nPosicao %d e Posicao %d", p[i], p[i+1]);
    }

    return 0;
}