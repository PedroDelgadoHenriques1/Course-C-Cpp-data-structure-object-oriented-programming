#include <iostream>

using namespace std;

//FAÇA UM PROGRAMA COM UMA CLASSE IDIOMA E UM MÉTODO SAUDAR,
//DEPOIS CRIE 3 SUBCLASSES USANDO POLIMORFISMO PARA IMPRIMIR NA TELA A SAUDAÇÃO EM CADA IDIOMA
//DIFERENTE DE ACORDO COM O NOME DA SUBCLASSE.

// Classe Pai
class Idioma {
public:
    // Método Virtual (Vazio)
    void emitirSaudacao() {}
};

class Ingles : public Idioma {
public:
    void emitirSaudacao() {
        cout << "Hi\n";
    }
};

class Japones : public Idioma {
public:
    void emitirSaudacao() {
        cout << "Kon'nichiwa\n";
    }
};

class Alemao : public Idioma {
    public:
        void emitirSaudacao() {
            cout << "Hallo\n";
        }
    };

int main() {

    Ingles ingles1;
    ingles1.emitirSaudacao();

    Japones japones1;
    japones1.emitirSaudacao();

    Alemao alemao1;
    alemao1.emitirSaudacao();


    return 0;
}
