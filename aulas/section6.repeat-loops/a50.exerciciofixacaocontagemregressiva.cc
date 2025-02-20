#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    
    //Para usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que imprima os números de 10 a 0 
    // de forma regressiva. (usando While, Do While e For)

    //While
    int i = 10;
    while(i<=10 && i>=0)
    {
        printf("%d\n", i);
        i--;
    }

    //Do While
    i = 10;
    do 
    {
        printf("%d\n", i);
        i--;
    }while(i<=10 && i>=0);


    //For
    for(i = 10; i>=0; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}
