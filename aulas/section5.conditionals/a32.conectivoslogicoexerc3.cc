#include <stdlib.h>
#include <stdio.h>

int main() {
    //FAÇA UM PROGRAMA QUE LEIA 2 NÚMEROS INTEIROS E IMPRIMA NA TELA SE ALGUM DELES FOR MAIOR QUE 10

    int n1, n2;

    scanf("%d %d", &n1, &n2);

    if (n1 > 10 || n2 > 10){
        printf("algum dos números é maior que 10");
    }else {
        printf("nenhum dos números é maior que 10");
    }

    

    return 0;
}