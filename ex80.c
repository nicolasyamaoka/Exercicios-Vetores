#include <stdio.h>

int main() {
    int Q[20] , i , status = 0, posição = 0, maior = 0;

    for(i=0; i<20 ;i++){
        do{
        printf("escreva o numero %d positivo?  ->  ", i+1);
        scanf("%d",&Q[i]);

        if(Q[i] < 0){
            status = 1;
        } else {
            status = 0;
        }

        } while(status == 1);
    }

    for(i=0; i<20; i++){
        if(Q[i] >= maior){
            maior = Q[i];
            posição = i + 1;
        } 
    }

    printf("\nO maior valor e %d que está na posição %d", maior, posição);
    
}