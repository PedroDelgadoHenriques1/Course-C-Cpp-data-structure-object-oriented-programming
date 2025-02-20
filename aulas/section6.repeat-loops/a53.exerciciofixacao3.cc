#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() {
 
    //Para usar acentos
    setlocale(LC_ALL,"");
 
    //Crie um algoritmo que informe se o valor lido é primo ou não
    int i, valor, aux;

    printf("Digite um valor para saber se ele é primo: ");
    scanf("%d", &valor);

    for (i = 1; i <= valor ; i++)
    {
        //conferindo quantas vezes houve divisibilidade
        if (valor % i == 0)
        {
            aux++;
        }
        printf("%d / %d tem o resto = %d\n", valor, i, valor%i);
    }
    
    if (aux == 2)
    {
        printf("O número é primo");
    }else{
        printf("O número não é primo");
    }

    return 0;
}
