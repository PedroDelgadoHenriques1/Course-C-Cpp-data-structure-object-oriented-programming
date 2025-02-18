#include <stdlib.h>
#include <stdio.h>

int main() {
    //FAÇA UM PROGRAMA QUE LEIA 3 NÚMEROS INTEIROS E IMPRIMA NA TELA SE OS 3 SÃO MAIORES QUE 10

    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if (n1 > 10 && n2 > 10 && n3 > 10) {
        printf("Os 3 números são maiores que 10\n");
    } else {
        printf("Os 3 números não são maiores que 10\n");
    }

    return 0;
}