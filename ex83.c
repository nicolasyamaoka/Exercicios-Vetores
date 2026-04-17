#include <stdio.h>

int main() {
    int A[20], i;

    for(i=0; i<20 ;i++){
        printf("\nescreva o numero %d  ->  ", i+1);
        scanf("%d",&A[i]);
    }

    for(i=19; i>=0; i--){
    printf("\n%d", A[i]);
    }
    
}
