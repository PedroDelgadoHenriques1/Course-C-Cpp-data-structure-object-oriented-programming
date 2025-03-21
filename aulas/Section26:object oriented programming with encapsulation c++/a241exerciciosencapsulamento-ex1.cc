#include <iostream>
using namespace std;

class Celular {
private:
    string marca; // Atributo privado que armazena o nome da pessoa
    int preco;

public:
    // Getter 
    string getMarca() {
        return marca;
    }

    float getPreco() {
        return preco;
    }


    // Setter 
    void setMarca(string marcaNova) {
        marca = marcaNova;
    }

    void setPreco(float precoNovo) {
        preco = precoNovo;
    }
};

int main() {
    Celular celular1;          
    celular1.setMarca("Xiaomi"); 
    celular1.setPreco(2999.99); 
    cout << celular1.getMarca() << "\n"; 
    cout << celular1.getPreco() << "\n"; 
    return 0;
}
