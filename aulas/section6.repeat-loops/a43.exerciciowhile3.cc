#include <stdlib.h>
#include <stdio.h>

int main() {
    
    //FAÇA UM PROGRAMA QUE MOSTRE A SOMA DE DOIS NÚMEROS ENTRE 5 E 10, APENAS QUANDO OS DOIS NÚMEROS DIGITADOS ESTIVEREM NO INTERVALO.

    int num1, num2;
    int soma = 0;
    printf("Será feito a soma apenas se o primeiro e o segundo número estiverem entre 5 e 10 \n");
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    while (num1 >= 5 && num1 <= 10 && num2 >= 5 && num2 <= 10)
    {
        soma = num1 + num2;
        printf("A soma dos números %d e %d é %d", num1, num2, soma);
        break;
    } 
    return 0;
}