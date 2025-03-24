#include <iostream>

using namespace std;

// Classe Pai
class Animal {
public:
    // Método Virtual (Vazio)
    void emitirSom() {}
};

class Cachorro : public Animal {
public:
    // Ao chamar emitirSom() num Cachorro
    // Esse é o método que será chamado
    void emitirSom() {
        cout << "Au au";
    }
};

class Gato : public Animal {
public:
    // Ao chamar emitirSom() num Gato
    // Esse é o método que será chamado
    void emitirSom() {
        cout << "Miau Miau";
    }
};

int main() {
    // O método emitirSom() sobrepõe o do Animal
    Cachorro cachorro1;
    cachorro1.emitirSom();

    // O método emitirSom() sobrepõe o do Animal
    Gato gato1;
    gato1.emitirSom();

    return 0;
}
