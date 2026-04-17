#include <stdio.h>

int main() {
    int i, media = 0, contador = 0, notaTotal = 0;
    int notas[20];

    for(i=0; i<20 ;i++){
        printf("Qual e a nota do aluno %d?  ->  ", i);
        scanf("%d",&notas[i]);
        notaTotal = notaTotal + notas[i];
    }

    media = notaTotal / 20;

    for(i=0; i<20; i++){
        if(notas[i] > media){
            contador++;
        }
    }

    printf("A média da sala e %d e temos %d alunos com uma nota superior a media", media, contador);
    
}