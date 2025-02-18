#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
     //Para usar acentos
     setlocale(LC_ALL, "");

    //Faça um programa que leia dois números inteiros e imprima na tela qual é o maior deles ou se são iguais

    int num1, num2;
    
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);
    

    if (num1 > num2){
        printf("O maior é o %d\n", num1);
    } else if (num2 > num1){
        printf("O maior é o %d\n", num2);
    }else{
        printf("Os números são iguais\n");
    }
    
    return 0;
}
