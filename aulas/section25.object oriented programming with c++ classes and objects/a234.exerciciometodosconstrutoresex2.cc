#include <iostream>
#include <string>
using namespace std;

//FAÇA UM PROGRAMA COM UMA CLASSE CACHORRO QUE TEM UMA RAÇA E SEJA POSSÍVEL CRIAR UM CACHORRO JÁ INFORMANDO A RAÇA, OU ENTÃO SEM INFORMAR. 
//SE NÃO INFORMAR, ATRIBUA A RAÇA "VIRALATINHA"

class Cachorro {
    public:
        string raca;
        
        //Método construtor é inicializado quando a class é criada
        Cachorro(){
            raca = "Viralatinha";
        }
        Cachorro(string racaNova){
            raca = racaNova;
        }
};

int main(){
    
    
    Cachorro cachorro1; 
    cout << "Cachorro 1: " << cachorro1.raca << "\n";

    Cachorro cachorro2("Yorkshire"); 
    cout << "Cachorro 2: " << cachorro2.raca;

    return 0;
}
