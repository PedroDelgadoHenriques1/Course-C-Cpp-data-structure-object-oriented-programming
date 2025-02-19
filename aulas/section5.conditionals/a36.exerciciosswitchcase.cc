#include <stdlib.h>
#include <stdio.h>

int main() {
    
    //FAÇA UM PROGRAMA DE CALCULADORA QUE LEIA DOIS VALORES E MOSTRE AS OPÇÕES DE SOMAR OU SUBTRAIR.
    //APÓS SELECIONAR A OPÇÃO, O RESULTADO SERÁ MOSTRADO NA TABELA, BASEADO EM UM SWITCH.

    float num1, num2;
    int opcao;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Escolha a operação desejada:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("A soma de %.2f e %.2f é %.2f\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("A subtração de %.2f e %.2f é %.2f\n", num1, num2, num1 - num2);
            break;
        default:
            printf("Opção inválida\n");
    }

    return 0;
}