#include <iostream>
using namespace std;

//FAÇA UM PROGRAMA COM UMA CLASSE PESSOA QUE RECEBA INFORMAÇÕES DE NOME, IDADE E SALÁRIO DIRETAMENTE NA
// CONSTRUÇÃO DO OBJETO E ASSOCIE AOS CAMPOS CORRETOS.
//ADICIONE UM MÉTODO PARA IMPRIMIR TODOS OS CAMPOS.

class Pessoa{
    public:
        string nome;
        int idade;
        float salario;

        Pessoa(string nomeNovo, int idadeNova, float salarioNovo){
            nome = nomeNovo;
            idade = idadeNova;
            salario = salarioNovo;
        }

        void imprimeInformacoes(){
            cout << "\nNome: " << nome << "\nIdade: " << idade; 
            cout << "\nSalário: " << salario;
        }

};

int main(){
    
    Pessoa pessoa1("Pedrão", 25, 1000);
    pessoa1.imprimeInformacoes();
    return 0;
}
