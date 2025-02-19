#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    
    // // gerar números aleatórios
    // srand(time(NULL));

    // //Cria um número aleatório de 0 a 9
    // int r = rand() % 10;

    // //Imprime um número gerado
    // printf("Número gerado: %d\n", r);

    // return 0;

    srand(time(NULL)); 

    int maximo = 14;
    int minimo = 5;

    int r = (rand() % (maximo - minimo + 1)) + minimo;

    printf("Número gerado: %d\n", r);

    return 0;
}