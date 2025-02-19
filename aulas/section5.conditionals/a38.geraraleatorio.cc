#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    
    //FAÇA UM PROGRAMA QUE JOGA 3 DADOS DE SEIS LADOS ALEATORIOS E EXIBE O RESULTADO DA SOMA DOS 3 VALORES GERADOS NA TELA
    
    srand(time(NULL));

    printf("JOGUEI 3 DADOS o valor de cada dados é: ");
    int dado1 = rand() % 6 + 1;
    int dado2 = rand() % 6 + 1;
    int dado3 = rand() % 6 + 1;


    printf("Dado 1: %d\n", dado1);
    printf("Dado 2: %d\n", dado2);
    printf("Dado 3: %d\n", dado3);

    printf("A soma dos valores dos dados é: %d\n", dado1 + dado2 + dado3);

    return 0;
}