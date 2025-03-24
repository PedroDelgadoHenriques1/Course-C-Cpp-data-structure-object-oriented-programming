#include <iostream>

using namespace std;

// Classe Base Abstrata com ambos os tipos de métodos
class Animal {
public:
    // Método virtual puro (DEVE ser implementado pelas classes derivadas)
    virtual void fazerSom() const = 0;

    // Método virtual não puro (tem implementação padrão)
    virtual void comer() const {
        cout << "Animal está comendo." << endl;
    }
};

// Classe Derivada 1
class Cachorro : public Animal {
public:
    // Implementação obrigatória do método puro
    void fazerSom() const override {
        cout << "Au Au!" << endl;
    }

    // O método comer() usa a implementação padrão da classe base
};

// Classe Derivada 2
class Gato : public Animal {
public:
    // Implementação obrigatória do método puro
    void fazerSom() const override {
        cout << "Miau!" << endl;
    }

    // Sobrescrevendo o método não puro
    void comer() const override {
        cout << "Gato está comendo elegantemente." << endl;
    }
};

int main() {
    // Animal animal; // Erro: não pode instanciar classe abstrata
    
    Cachorro cao;
    Gato gato;

    // Usando os métodos
    cout << "Cachorro:" << endl;
    cao.fazerSom();
    cao.comer();

    cout << "\nGato:" << endl;
    gato.fazerSom();
    gato.comer();

    return 0;
}

