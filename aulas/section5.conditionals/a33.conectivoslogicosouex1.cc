#include <stdlib.h>
#include <stdio.h>

int main() {
    //FAÇA UM PROGRAMA QUE LEIA 2 NÚMEROS INTEIROS E IMPRIMA NA TELA SE ALGUM FOR PAR. 
    // DICA: PARA SEPARAR OPERAÇÕES DE COMPARAÇÃO USE PARÊNTESES.
    
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if ((num1 % 2 == 0 || num2 % 2 ==0)){
        printf("Algum dos números é par");
    }
    else{
        printf("Nenhum dos números é par");
    }

    return 0;
}