#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    
    //Para usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que imprima os números pares de 10 a 20
    // de forma crescente. (usando While, Do While e For)
    int i = 10;
    //While
    while(i>= 10 && i<=20)
    {
        if(i % 2 == 0)
        {
            printf("%d\n", i);
        }else{
            printf("%d é ímpar \n", i);
        }
        i++;
    }

    //Do While
    //int i = 10;
    do
    {
        if(i % 2 == 0)
        {
            printf("%d\n", i);
        }else{
            printf("%d é ímpar \n", i);
        }
        i++;
    } while (i>= 10 && i<=20);

    //int i;
    for(i = 10; i <= 20; i++){
        if(i % 2 == 0){
            printf("%d é par \n", i);
        }else{
            printf("%d é ímpar \n", i);
        }
    }
    

    return 0;
}
