#include <iostream>
using namespace std;

class Pessoa {
private:
    string nome; // Atributo privado que armazena o nome da pessoa

public:
    // Getter do nome, retorna o nome atual
    string getNome() {
        return nome;
    }

    // Setter do nome, atualiza o nome
    void setNome(string nomeNovo) {
        nome = nomeNovo;
    }
};

int main() {
    Pessoa pessoa1;          // Cria um objeto Pessoa sem atributos iniciais
    pessoa1.setNome("Patrick"); // Modifica o nome do objeto para "Patrick"
    cout << pessoa1.getNome() << "\n"; // Imprime o nome armazenado
    return 0;
}
