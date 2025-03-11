#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[]) {
    cout << "\n";
    for (int i = 0; i < TAM; i++) {
        cout << " |" << vetor[i] << "| ";
    }
}

void merge(int vetor[TAM], int indiceEsquerdo, int meio, int indiceDireito) {
    int n1 = meio - indiceEsquerdo + 1;
    int n2 = indiceDireito - meio;

    // Usa std::vector no lugar de VLAs
    vector<int> vetorEsquerdo(n1);
    vector<int> vetorDireito(n2);

    // Preenche os vetores temporários
    for (int i = 0; i < n1; i++) {
        vetorEsquerdo[i] = vetor[indiceEsquerdo + i];
    }
    for (int j = 0; j < n2; j++) {
        vetorDireito[j] = vetor[meio + 1 + j];
    }

    int i = 0, j = 0, k = indiceEsquerdo;

    while (i < n1 && j < n2) {
        if (vetorEsquerdo[i] <= vetorDireito[j]) {
            vetor[k] = vetorEsquerdo[i];
            i++;
        } else {
            vetor[k] = vetorDireito[j];
            j++;
        }
        k++;
    }

    // Copia elementos restantes (corrigido o incremento de 'j' para 'i')
    while (i < n1) {
        vetor[k] = vetorEsquerdo[i];
        i++;
        k++;
    }
    while (j < n2) {
        vetor[k] = vetorDireito[j];
        j++; // Corrigido de 'i++' para 'j++'
        k++;
    }
}

void merge_sort(int vetor[TAM], int indiceEsquerdo, int indiceDireito) {
    if (indiceEsquerdo < indiceDireito) {
        int meio = indiceEsquerdo + (indiceDireito - indiceEsquerdo) / 2;
        merge_sort(vetor, indiceEsquerdo, meio);
        merge_sort(vetor, meio + 1, indiceDireito);
        merge(vetor, indiceEsquerdo, meio, indiceDireito);
    }
}

int main() {
    int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    imprimeVetor(vetor);
    merge_sort(vetor, 0, TAM - 1);
    imprimeVetor(vetor);
    return 0;
}