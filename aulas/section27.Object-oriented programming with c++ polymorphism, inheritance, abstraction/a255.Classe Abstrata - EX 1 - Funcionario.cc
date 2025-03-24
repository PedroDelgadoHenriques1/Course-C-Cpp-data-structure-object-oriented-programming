#include <iostream>

using namespace std;

//FAÇA UM PROGRAMA COM UMA CLASSE FUNCIONARIO COM UM METODO VIRTUAL VAZIO IMPRIMIRFUNCOES, E CRIE
//DUAS SUBCLASSES DE SUA ESCOLHA QUE IMPRIMAM DIFERENTES FUNÇOES PARA CADA FUNCIONÁRIO

class Funcionario {
    public:
        virtual void imprimirFuncoes() = 0;
};

class Gerente: public Funcionario {
    public:
        void imprimirFuncoes() {
            cout << "Gerente: Gerenciar a equipe" << endl;
        }
};

class Programador: public Funcionario {
    public:
        void imprimirFuncoes() {
            cout << "Programador: Desenvolver software" << endl;
        }
};

int main() {
    Gerente G;
    Programador P;

    G.imprimirFuncoes();
    P.imprimirFuncoes();

    return 0;
}

// Output:
// Gerente: Gerenciar a equipe
// Programador: Desenvolver software
