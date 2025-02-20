#include <stdlib.h>
#include <stdio.h>

int main() {
    
    //FAÇA UM PROGRAMA QUE IMPRIMA OS NÚMEROS PARES DE 10 ATÉ UM NÚMERO INFORMADO PELO USUÁRIO

    int i = 10;
    int numuser;
    printf("Digite um número limite para ser informado números pares de 10 até o número escolhido: ");
    scanf("%d", &numuser);

    while (i <= numuser)
    {
        if (i % 2 == 0)
        {
            printf("%d \n", i);
        }
        i++;
    }

    return 0;
}