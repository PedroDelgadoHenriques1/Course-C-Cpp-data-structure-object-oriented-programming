#include <stdio.h>
#include <stdlib.h>
 
//Função principal do programa
int main(){
 
 
    //Crie um algoritmo que leai 3 valores para um vetor de 3 posições
    //e depois calcule a média dos valores acessando o vetor.

    float vetor[3], media;

    for (int i = 0; i < 3; i++){
        printf("Digite o valor para o vetor[%d]: ", i);
        scanf("%f", &vetor[i]);
    }   

    media = (vetor[0] + vetor[1] + vetor[2]) / 3;

    printf("\nvetor[0] %.2f", vetor[0]);
    printf("\nvetor[1] %.2f", vetor[1]);
    printf("\nvetor[2] %.2f", vetor[2]);
    printf("\nA média dos valores é: %.2f", media);

    return 0;
}