#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main() {

    //Definindo Variáveis
    int a;
    float b;
    char c;
    bool d;

    //Passando valores
    a = 10;
    b = 2.8;
    c = 'w';
    d = true;

    //Escrevendo variáveis na tela
    printf("\nValor: %d", a);
    printf("\nValor: %.2f", b);
    printf("\nValor: %c", c);
    printf("\nValor: %d", d);

    //imprimindo com C++
    std::cout << "Valor: " << a;


    return 0;
}