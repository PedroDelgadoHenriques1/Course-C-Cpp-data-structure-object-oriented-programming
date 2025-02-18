#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
     //Para usar acentos
     setlocale(LC_ALL, "");

    //Faça um programa que leia um número inteiro e informe se ele é par ou não

    int num1;
    
    printf("Digite um número para verificar se é par ou não: ");
    scanf("%d", &num1);
    

    if (num1 % 2 == 0){
        printf("O número %d é par\n", num1);
    } else {
        printf("O número %d é ímpar\n", num1);
    }
    
    return 0;
}
