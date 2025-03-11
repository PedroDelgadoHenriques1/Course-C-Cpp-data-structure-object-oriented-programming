#include<stdio.h>
#include <stdlib.h>
#define TAM 3
#include <new>

//Aloca um vetor do tamanho pedido
int * alocaVetor(int tam) {
        
    //Cria um ponteiro auxiliar
    int *v;

    //Aloca memória para o novo vetor
    v = new int[tam];

    return v;
}

//Imprime a lista sequencial
void imprimeSequencial(int *vetor, int tamanhoDaListaSequencial) {

    int cont;
    //Exibindo valores
    for(cont = 0; cont < tamanhoDaListaSequencial; cont++) {
        printf("\nValor %d: %d", cont, vetor[cont]);
    }
}


int main(){
    
    //variaveis
    int vetor[TAM] = {1,2,3}, cont, tamanhoDaLista;

    //Exibindo valores
    for(cont = 0; cont < TAM; cont ++) {
    printf("\nValor %d: %d", cont, vetor[cont]);
    }

    imprimeSequencial(vetor, 3);

    //lendo novos valores
    for(cont = 0; cont < TAM; cont++) {
        scanf("%d", &vetor[cont]);
    }

    imprimeSequencial(vetor, 3);

    //Pedindo tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhoDaLista);

    //POnteiro para o novo valor
    int *vetorLidoNaHora;

    //Passa o espaço da memória que foi criado para o vetor
    vetorLidoNaHora = alocaVetor(tamanhoDaLista);


    //Lendo novos valores
    for(cont = 0; cont < tamanhoDaLista; cont++) {
        scanf("%d", &vetorLidoNaHora[cont]);
    }

    return 0;
}



