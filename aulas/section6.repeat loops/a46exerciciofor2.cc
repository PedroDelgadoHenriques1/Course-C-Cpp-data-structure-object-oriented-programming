#include <stdlib.h>
#include <stdio.h>

int main() {
    
    //FAÇA UM PROGRAMA QUE MOSTRE A TABUADA DE UM NÚMERO INFORMADO PELO USUÁRIO

    printf("Digite um número para ver a tabuada: ");
    int num1;
    scanf("%d", &num1);
    int tabuada;

    for (int i = 1; i <= 10; i++)
    {
        tabuada = num1 * i;
        printf("Iteração número %i = O número %d * %i é igual a %d \n", i, num1, i, tabuada);
    }

    
    return 0;
}