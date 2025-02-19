#include <stdlib.h>
#include <stdio.h>

int main() {
    //FAÇA UM PROGRAMA QUE LEIA 2 NÚMEROS INTEIROS E IMPRIMA NA TELA SE A SOMA DELES ESTIVER ENTRE 0 E 10 
    // OU SE A SOMA FOR PAR
    
   int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if((num1 + num2 >= 0 && num1 + num2 <= 10) || (num1 + num2) % 2 == 0){
        printf("A soma dos números está entre 0 e 10 ou é par");
    }
    else{
        printf("A soma dos números não está entre 0 e 10 e não é par");
    }

    return 0;
}