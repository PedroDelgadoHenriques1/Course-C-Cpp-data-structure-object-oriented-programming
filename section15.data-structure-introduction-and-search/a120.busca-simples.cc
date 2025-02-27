#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10

using namespace std;
 
int main () {
 
    int vetor [TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int valorProcurado;
    int posicao;
    int cont;
    bool valorFoiEncontrado;

    //Imprime o vetor
    for(cont = 0; cont < TAM; cont++) {
        cout << vetor[cont] << " - ";
    }

    printf("Qual número deseja encontrar? ");
    scanf("%d", &valorProcurado);

    //Percorre a lista em busca do valor
    // for(cont = 0; cont < TAM; cont++) {
    //     if()
    // }

    return 0;
}