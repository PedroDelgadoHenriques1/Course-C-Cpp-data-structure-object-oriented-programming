#include <iostream>
#include <string>

using namespace std;


//FAÇA UM PROGRAMA COM UMA CLASSE CALCULADORA COM DOIS MÉTODOS PARA SOMAR, UM DELES RECEBE 2 INTEIROS E O OUTRO RECEBE 3 INTEIROS, 
// O MÉTODO SOMAR RECEBE OS PARÂMETROS E RETORNA A SOMA DELES.
//TESTE A CALCULADORA SOMANDO E EXIBINDO NA TELA 2 VALORES E DEPOIS 3 VALORES.

class Calculadora {
public:
    int somar(int a, int b) {
        return a + b;
    }

    int somar(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculadora calc;

    cout << "Soma de 2 valores: " << calc.somar(10, 20) << endl;
    cout << "Soma de 3 valores: " << calc.somar(10, 20, 30) << endl;

    return 0;
}

