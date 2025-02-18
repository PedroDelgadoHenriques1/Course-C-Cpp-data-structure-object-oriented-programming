#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    // Permite usar acentos
    setlocale(LC_ALL, "");
    printf("Olá\n");

    // Lendo valor inteiro
    int a = 50;
    printf("O valor de a é = %d \n", a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d\n", a);

    // Lendo valor float
    float b = 5.5;
    printf("O valor de b é = %f\n", b);
    scanf("%f", &b);
    printf("O valor de b mudou para %f\n", b);

    // Lendo caractere
    char letra = 't';
    printf("O valor da letra é = %c\n", letra);
    // O espaço antes de %c ignora quebras de linha pendentes
    fflush(stdin);
    scanf(" %c", &letra);
    printf("O valor da letra mudou para %c\n", letra);

    return 0;
}
