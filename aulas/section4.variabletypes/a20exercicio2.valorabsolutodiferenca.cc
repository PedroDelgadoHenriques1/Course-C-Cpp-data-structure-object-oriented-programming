#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    //Crie um algoritmo que leia 2 notas e mostre o valor absoluto da diferença entre elas.
    
     //Para usar acentos
     setlocale(LC_ALL, "");

     //Crie um algoritmo que leia 2 notas e mostre a média entre elas.
 
     int nota1, nota2;
 
     printf("\nDigite a primeira nota: ");
     scanf("%d", &nota1);
     printf("\nDigite a segunda nota: ");
     scanf("%d", &nota2);
 
 
     int absdif = abs(nota1 - nota2);
 
     printf("\nO valor absoluto da diferença entre %d e %d é %d", nota1, nota2, absdif);
     

    return 0;
}