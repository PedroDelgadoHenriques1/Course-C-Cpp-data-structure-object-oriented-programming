#include <stdlib.h>
#include <stdio.h>

int main() {
    //FAÇA UM PROGAMA QUE LEIA UM NÚMERO INTEIRO E IMPRIMA NA TELA SE ELE ESTA ENTRE 0 E 10

    int num;
    scanf("%d", &num);
    
    if(num >= 0 && num <= 10) {
        printf("O número %d está entre 0 e 10\n", num);
    } else {
        printf("O número %d não está entre 0 e 10\n", num);
    }

    return 0;
}