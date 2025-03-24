#include <iostream>
using namespace std;

//FAÇA UM PROGRAMA COM UMA CLASSE PESSOA COM NOME E CPF, SEUS GETTERS E SETTERS.
//DEPOIS UMA CLASSE PROFESSOR SUBCLASSE DE PESSOA COM SALÁRIO, SEUS GETTERS E SETTERS.
//A CLASSE PROFESSOR DEVE TER 2 MÉTODOS CONSTRUTORES, UM QUE NÃO RECEBE PARÂMETROS E UMA QUE RECEBE NOME, CPF E SALÁRIO.
//DEPOIS CRIE UMA PESSOA COM NOME E CPF E CRIE UM FUNCIONÁRIO COM NOME, CPF E SALÁRIO.

class Pessoa{
    private:
        string nome;
        int cpf;
    public:
        string getNome(){
            return nome;
        }

        void setNome(string nome){
            this->nome = nome;
        }

        int getCpf(){
            return cpf;
        }

        void setCpf(int cpf){
            this->cpf = cpf;
        }
};

class Professor: public Pessoa{
    private:
        int salario;
    public:
        int getSalario(){
            return salario;
        }

        void setSalario(int salario){
            this->salario = salario;
        }


        Professor(){
            salario = 0;
        }

        Professor(string nome, int cpf, int salario){
            this->setNome(nome);
            this->setCpf(cpf);
            this->setSalario(salario);
        }
};


int main(){
    Pessoa p;
    p.setNome("Pedrão");
    p.setCpf(123456789);

    Professor prof("Ramonzão", 987654321, 1000000);

    cout << "Nome: " << p.getNome() << endl;
    cout << "CPF: " << p.getCpf() << endl;

    cout << "Nome: " << prof.getNome() << endl;
    cout << "CPF: " << prof.getCpf() << endl;
    cout << "Salário: " << prof.getSalario() << endl;

    return 0;
}

