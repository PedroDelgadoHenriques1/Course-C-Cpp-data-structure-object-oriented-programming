#include <iostream>

using namespace std;

class FormaGeometrica {
    public:
        virtual int Area() = 0; // Função Virtual - será sobrescrita
        
        // Função para definir a largura
        void setLargura(int largura) {
            this->largura = largura;
        }

        // Função para definir a altura
        void setAltura(int altura) {
            this->altura = altura;
        }

    protected:
        int largura;
        int altura;
};

// Retângulo é uma FormaGeometrica
class Retangulo: public FormaGeometrica {
    public:
        // Sobrescreve a Area() de FormaGeometrica
        int Area() {
            return largura * altura;
        }
};

// Triângulo é uma FormaGeometrica
class Triangulo: public FormaGeometrica {
    public:
        // Sobrescreve a Area() de FormaGeometrica
        int Area() {
            return (largura * altura) / 2;
        }
};

int main() {
    Retangulo R;
    Triangulo T;

    R.setLargura(5);
    R.setAltura(10);

    T.setLargura(20);
    T.setAltura(8);

    cout << "Area do retangulo: " << R.Area() << endl;
    cout << "Area do triangulo: " << T.Area() << endl;

    return 0;
}
