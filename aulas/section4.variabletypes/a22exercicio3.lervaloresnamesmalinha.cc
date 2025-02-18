#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
     //Para usar acentos
     setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 3 números inteiros de uma só vez e
    //coloque os resultados da multiplicação entre os 3 em uma variável própria,
    //depois exiba essa variável.

    int num1, num2, num3, multiplicacao;
    printf("Digite 3 números para serem multiplicados: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    multiplicacao = num1*num2*num3;

    printf("A multiplicação de %d, %d e %d é = %d", num1, num2, num3, multiplicacao);
    return 0;
}
