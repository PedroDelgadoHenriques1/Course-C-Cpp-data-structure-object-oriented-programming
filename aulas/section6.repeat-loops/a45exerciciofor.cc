#include <stdlib.h>
#include <stdio.h>

int main() {
    
    //FAÇA UM PROGRAMA QUE MOSTRE A SOMA DE TODOS OS NÚMEROS DE 0 A 10, ADICIONANDO O VALOR ATUAL DE I NUMA VARIAVEL SOMA, A CADA REPETIÇÃO DO LADO FOR

    int soma = 0;
    for (int i = 0; i <= 10; i++)
    {
        soma = soma + i;
        printf("Iteração número %i = A soma dos números de 0 a 10 é %d \n", i, soma);
    }

    
    return 0;
}