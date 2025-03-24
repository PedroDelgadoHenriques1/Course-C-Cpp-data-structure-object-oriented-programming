#include <iostream>
using namespace std;

//FAÇA UM PROGRAMA COM UMA CLASSE ANIMAL COM TERRENO, SEUS GETTERS E SETTERS. 
//DEPOIS UMA CLASSE MAMIFERO COM FILHA DE ANIMAL COM MESESGESTACAO, SSEUS GETTERS E SETTERS.
//DEPOIS UMA CLASSE CACHORRO FILHA DE MEMIFERO COM RAÇA, SEUS GETTERS E SETTERS E UM METODO PARA LATIR
//D DEPOIS CRIE UM CACHORRO COM TERRENO, MESESGESTACAO, RAÇA E FAÇA-O LATIR.

//OBS: FAÇA PRIMEIR OUM DIAGRAMA UML, DEPOIS CODIFIQUE O PROGRAMA

class Animal{
    private:
        string terreno;
    public:
        string getTerreno(){
            return terreno;
        }
        void setTerreno(string terreno){
            this->terreno = terreno;
        }
};

class Mamifero: public Animal{
    private:
        int mesesGestacao;
    public:
        int getMesesGestacao(){
            return mesesGestacao;
        }
        void setMesesGestacao(int mesesGestacao){
            this->mesesGestacao = mesesGestacao;
        }
};

class Cachorro: public Mamifero{
    private:
        string raca;
    public:
        string getRaca(){
            return raca;
        }
        void setRaca(string raca){
            this->raca = raca;
        }
        void latir(){
            cout << "Au Au" << endl;
        }
};

int main() {
    Cachorro cachorro1;
    cachorro1.setTerreno("Terra");
    cachorro1.setMesesGestacao(4);
    cachorro1.setRaca("Poodle");
    cout << cachorro1.getTerreno() << endl;
    cout << cachorro1.getMesesGestacao() << endl;
    cout << cachorro1.getRaca() << endl;
    cachorro1.latir();
    return 0;
}

