#include <stdlib.h>
#include <stdio.h>

int main() {
    
    //While
    int i = 0;

    while(i <= 10){

        //imprime i e pula uma linha
        printf("%d \n", i);

        //Aumenta em 1 o valor do i atual
        i += 1;

        //chegando chega aqui o codigo volta para 
        //a linha 8 e verifica se a condição 
        //i <= 10 ainda é verdadeira, para
        //executar o laço novamente ou sair
    }
    return 0;
}