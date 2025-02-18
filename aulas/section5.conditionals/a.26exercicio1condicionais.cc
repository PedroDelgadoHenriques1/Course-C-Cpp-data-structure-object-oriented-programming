#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
     //Para usar acentos
     setlocale(LC_ALL, "");

    //Faça um programa que leia dois números inteiros e imprima na tela se a soma deles é maior/igual a 10 ou menor que 10.

    int num1, num2, soma;
    
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);
    soma = num1 + num2;

    if (soma >= 10){
        printf("A soma dos números é maior ou igual a 10\n");
    } else {
        printf("A soma dos números é menor que 10\n");
    }
    
    return 0;
}
