#include <iostream>
using namespace std;

class Salgadinho {
private:
    string sabor; // Atributo que armazena o sabor do salgadinho

public:
    // Método construtor que recebe o sabor
    Salgadinho(string s) {
        sabor = s;
    }

    // Retorna o sabor
    string getSabor() {
        return sabor;
    }

    // Setter do sabor, atualiza o atributo 'sabor'
    void setSabor(string sabor) {
        this->sabor = sabor;
    }
};

int main() {
    // Cria um objeto Salgadinho com sabor "Picante"
    Salgadinho s("Picante");

    // Imprime o sabor do salgadinho
    cout << "Salgadinho1 sabor: " << s.getSabor() << "\n";

    return 0;
}
