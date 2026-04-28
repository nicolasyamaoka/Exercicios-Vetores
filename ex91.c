#include <stdio.h>

int main() {
    int VET[10], i, j, k, l;
    int p[20], n[20], contn = 0, contp = 0;
    char statusPi = 'V' , statusPj = 'V';

    for(k=0;k<20;k++){
        p[k]= -99999;
        n[k]= -99999;
    }

    for(i = 0; i < 10; i++){
        printf("\nEscreva o numero %d do vetor VET -> ", i);
        scanf("%d", &VET[i]);
    }

    for(i = 0; i<10;i++){ 
        for(j = i + 1; j < 10; j++){

            if(VET[i] == VET[j]){

                for(k = 0; k <20 ; k++){
                    if(i == p[k]){
                    statusPi = 'F';
                    }
                }

                for(k = 0; k <20 ; k++){
                    if(j == p[k]){
                    statusPj = 'F';
                    }
                }

                if(statusPi == 'V'){
                    p[contp++] = i; 
                    n[contn++] = VET[i]; 
                }

                if(statusPj == 'V'){
                    p[contp++] = j;
                    n[contn++] = VET[i]; 
                }             

            }   
        }
        statusPi = 'V';
        statusPj = 'V';
    }




    printf("\nAs posicoes dos numeros que se repetem sao:");
    for(i = 0; i < contp; i++){
        printf("\nO número %d se repete na posição %d", n[i], p[i]);
    }

    return 0;
}
