#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
 
using namespace std;
 

int main(){
    
    //para usar acentos
    setlocale(LC_ALL, "");

    //Preencha uma matriz 2x2 lendo valores do usuário e
    //depois troque os valores entre a primeira e a segunda linha.

    int matriz[2][2], i, j, aux1, aux2;

    //Lendo os valores
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");

    //imprimindo a matriz
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");



    //Auxiliares
    aux1 = matriz[0][0];
    aux2 = matriz[0][1];

    //Invertendo valores usando auxiliares
    matriz[0][0] = matriz[1][0];
    matriz[0][1] = matriz[1][1];
    matriz[1][0] = aux1;
    matriz[1][1] = aux2;


    //imprimindo nova matriz
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }

   return 0;
 
}