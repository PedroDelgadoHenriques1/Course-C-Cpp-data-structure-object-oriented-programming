#include <iostream>
#include <string>

using namespace std;

class Impressora {
public:
    // Método para imprimir um valor do tipo float
    void imprimir(float reais) {
        cout << "R$:" << reais << endl;
    }

    // Método para imprimir uma string
    void imprimir(const string& frase) {
        cout << "-" << frase << endl;
    }
};

int main() {
    // Criação de um objeto da classe Impressora
    Impressora impressora1;

    // Chamadas aos métodos sobrecarregados "imprimir"
    impressora1.imprimir(25.8f);        // Chama o método que recebe float
    impressora1.imprimir("Oi galera!"); // Chama o método que recebe string

    return 0;
}
