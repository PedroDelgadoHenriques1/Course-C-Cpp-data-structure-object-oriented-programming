#include <stdio.h>
#include <string.h>
#include <iostream>
#include <new>
 
using namespace std;

//Struct para frutas em vez de usar o vetor caracteres
struct fruta{
    string cor;
    string nome;
};
 
int main () {
    
    //Criando um ponteiro para o struct criado
    fruta *primeiraFruta = new fruta;
    
    //Modificando valores
    primeiraFruta->cor = "vermelha";
    primeiraFruta->nome = "maçã";

    //exibindo valores
    cout << "Fruta: " << primeiraFruta->nome <<  ", Cor: " << primeiraFruta->cor;

    //Criando uma lista de frutas
    fruta *ponteiroListaDeFrutas = new fruta[2];

    //Modificando valores
    ponteiroListaDeFrutas[0].cor = "Amarela";
    ponteiroListaDeFrutas[0].nome = "Banana";
    ponteiroListaDeFrutas[1 ].cor = "Verde";
    ponteiroListaDeFrutas[1].nome = "Kiwi";

    //Percorrendo e exibindo
    int cont;
    for(cont = 0; cont < 2; cont++){
        //Exibindo Valores
        cout << "\nFruta: " << ponteiroListaDeFrutas[cont].nome <<  ", Cor: " << ponteiroListaDeFrutas[cont].cor;
    }

    return 0;
}