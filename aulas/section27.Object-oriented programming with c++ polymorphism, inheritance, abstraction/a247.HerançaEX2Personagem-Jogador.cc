#include <iostream>
using namespace std;


class Usuario{
    private:
        string nome;
        string email;
    public:
        string getNome(){
            return nome;
        }

        void setNome(string nome){
            this->nome = nome;
        }

        string getEmail(){
            return email;
        }

        void setEmail(string email){
            this->email = email;
        }
};

class Personagem: public Usuario{
    private:
        int nivel;
    public:
        int getNivel(){
            return nivel;
        }

        void setNivel(int nivel){
            this->nivel = nivel;
        }

        //aumenta um nivel
        void aumentaUmNivel(){
            nivel++;
        }
};

