#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int tamanho) {
    
    //É criado um ponteiro auxiliar
    int *aux;

    //Alocação dinâmica de memória
    aux = (int*) malloc(tamanho * sizeof(int));

    //Retorna o ponteiro que aponta para a primeira posição de memória do vetor alocado
    return aux;

}


int main(){
 
    // Definindo Variáveis
    int *vetor, tamanho, cont;

    //Lendo o tamanho do vetor pelo usuario
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    //Ponteiro recebe endereço de memória que foi alocado para o vetor 
    vetor = alocaVetor(tamanho);

    vetor[0] = 0;
    vetor[1] = 10;
    vetor[2] = 20;
    vetor[3] = 30;

    //Coloca valores no vetor
    for(cont = 0; cont < tamanho; cont++){
        vetor[cont] = 90;
    }


    //Imprimindo os valores do vetor
    for(cont = 0; cont < tamanho; cont++){
        printf("vetor[%d] = %d\n", cont, vetor[cont]);
    }

    free( vetor );

    //Retorno da Função
    return 0;
}