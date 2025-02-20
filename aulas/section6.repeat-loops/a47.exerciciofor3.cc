#include <stdlib.h>
#include <stdio.h>

int main() {
    
    //FAÇA UM PROGRAMA EM QUE O USUÁRIO INFORME VALOR INICIAL, VALOR FINAL DE QUANTO EM QUANTO O VALOR DE I SERÁ MODIFICADO E
    //IMPRIMA TODOS OS VALORES NO INTERVALO INFORMADO COM OS PASSOS INFORMADOS
    int i;
    printf("Digite o valor inicial: ");
    int num1;
    scanf("%d", &num1);
    printf("Digite o valor final: ");
    int num2;
    scanf("%d", &num2);
    printf("Digite o valor do passo: ");
    int passo;
    scanf("%d", &passo);

    for (i = num1; i <= num2; i = i + passo)
    {
        printf("O valor de atual é %d\n", i);
    }
    
    return 0;
}