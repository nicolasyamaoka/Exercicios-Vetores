#include <stdio.h>

int main() {
    int i, contador = 0, somaT = 0, temperatura[365], mediaT;

    for(i=0; i<365 ;i++){
        printf("escreva a temperatura media do dia %d ->  ", i+1);
        scanf("%d",&temperatura[i]);
    }

    for(i=0; i<365 ;i++){
        somaT = somaT + temperatura[i];
    }

    int menorT = temperatura[0], maiorT = temperatura[0];
    mediaT = somaT/365;

    for(i=0; i<365 ;i++){
        if(temperatura[i] <= menorT){
            menorT = temperatura[i];
        }
        if (temperatura[i] >= maiorT){
            maiorT = temperatura[i];
        }
        if (temperatura[i] < mediaT){
            contador++;
        }
    }
    
    printf("\n A menor temperatura e %d", menorT);
    printf("\n A maior temperatura e %d", maiorT);
    printf("\n temperatura média anual e %d", mediaT);
    printf("\n O número de dias do ano em que a temperatua foi menor que a média anual e %d", contador);

}
