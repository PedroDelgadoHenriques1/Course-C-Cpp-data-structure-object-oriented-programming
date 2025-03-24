#include <iostream>

using namespace std;

// Classe Pai
class Menu {
public:
    // Método Virtual (Vazio)
    virtual void mostrarOpcoes() {}
};

class MenuCliente : public Menu {
public:
    void mostrarOpcoes() {
        cout << "----- Menu Cliente -----\n";
        cout << "1 - Comprar\n";
        cout << "2 - Vender\n";
        cout << "3 - Sair\n\n";
    }
};

class MenuAdministrador : public Menu {
public:
    void mostrarOpcoes() {
        cout << "----- Menu Administrador -----\n";
        cout << "1 - Comprar\n";
        cout << "2 - Vender\n";
        cout << "3 - Cadastrar Produto\n";
        cout << "4 - Excluir Produto\n";
        cout << "5 - Sair\n\n";
    }
};

int main() {
    MenuCliente menu1;
    menu1.mostrarOpcoes();

    MenuAdministrador menu2;
    menu2.mostrarOpcoes();

    return 0;
}
