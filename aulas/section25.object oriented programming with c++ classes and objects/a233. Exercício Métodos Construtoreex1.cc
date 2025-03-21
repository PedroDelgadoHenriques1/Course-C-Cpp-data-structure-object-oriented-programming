#include <iostream>
#include <string>
using namespace std;


//FAÇA UM PROGRAMA QUE LEIA UM SABOR INFORMADO PELO USUÁRIO, DEPOIS COM UMA CLASSE COXINHA, 
//CRIE A COXINHA JÁ ATRIBUIND O SABOR INFORMADO USANDO O MÉTODO CONSTRUTOR COM UM PARÂMETRO.


class Coxinha{                                                    //Definição do "molde para coxinha"
    public:                                                       //Modificador de acesso
        string sabor;                                             //Atributo sabor              
        
        //Método construtor é inicializado quando a class é criada
        Coxinha(string saborNovo){
            sabor = saborNovo;
        }
};

int main(){
    string sabor;                                                 //Variável auxiliar que receber um sabor
    cout << "Digite o sabor da coxinha: ";                        //Pede para o usuário digitar um sabor
    cin >> sabor;                                                 //lê o sabor        
    Coxinha coxinha1(sabor);                                      //Cria um objeto coxinha1 com o sabor informado
    cout << "Sua coxinha é sabor " << coxinha1.sabor << "\n";     //Imprime o sabor da coxinha

    return 0;
}
