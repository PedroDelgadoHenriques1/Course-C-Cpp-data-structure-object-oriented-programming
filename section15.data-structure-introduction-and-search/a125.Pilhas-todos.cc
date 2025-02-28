// pilha_comentada.cpp

#include <iostream>    // Inclui a biblioteca de entrada e saída padrão (cout, cin, etc.)
#include <stdlib.h>    // Inclui a biblioteca padrão (não utilizada diretamente neste código)
#include <string>      // Inclui a biblioteca para manipulação de strings (não utilizada neste código)
#define TAM 10         // Define a constante TAM com valor 10, que representa o tamanho máximo da pilha

using namespace std;   // Permite utilizar funções e objetos do namespace std sem precisar do prefixo "std::"

// Função que imprime o conteúdo do vetor e o índice do topo da pilha
void imprime_vetor(int vetor[TAM], int topo) {
    int cont;                    // Declara uma variável contador para uso no laço
    cout << "\n";                // Imprime uma nova linha para formatar a saída
    for(cont = 0; cont < TAM; cont++){    // Loop que percorre todas as posições do vetor (da posição 0 até TAM-1)
        cout << vetor[cont] << " - ";     // Imprime o valor na posição 'cont' seguido de " - " para separação visual
    }
    cout << "Topo: " << topo;    // Imprime o valor atual do topo da pilha
}

// Função que verifica se a pilha está vazia
bool pilha_vazia(int topo){
    if(topo == -1){              // Se o índice do topo for -1, a pilha está vazia
        return true;             // Retorna verdadeiro indicando que a pilha está vazia
    } else {                     // Caso contrário,
        return false;            // Retorna falso, pois a pilha não está vazia
    }
}

// Função que verifica se a pilha está cheia
bool pilha_cheia(int topo){
    if(topo == TAM - 1){         // Se o índice do topo for igual a TAM - 1, significa que a pilha atingiu seu tamanho máximo
        return true;             // Retorna verdadeiro indicando que a pilha está cheia
    } else {                     // Caso contrário,
        return false;            // Retorna falso, indicando que ainda há espaço na pilha
    }
}

// Função que retorna o tamanho atual da pilha (número de elementos)
int pilha_tamanho(int topo){
    return topo + 1;           // Como o índice inicia em 0, o tamanho é igual a (topo + 1)
}

// Função que retorna o elemento no topo da pilha
int pilha_get(int pilha[TAM], int *topo){
    if(pilha_vazia(*topo)){             // Verifica se a pilha está vazia usando a função pilha_vazia
        cout << "A pilha esta vazia";   // Se estiver vazia, informa ao usuário
        return 0;                      // Retorna 0 como valor padrão (poderia ser outra abordagem, como tratamento de erro)
    } else {                           // Se a pilha não estiver vazia,
        return pilha[*topo];           // Retorna o valor armazenado na posição do topo
    }
}

// Função que adiciona (empilha) um novo valor na pilha
void pilha_push(int pilha[TAM], int valor, int *topo){
    if(pilha_cheia(*topo)){             // Verifica se a pilha está cheia usando a função pilha_cheia
        cout << "Pilha cheia!";         // Se estiver cheia, informa que não é possível adicionar novos elementos
    } else {                           // Se ainda houver espaço na pilha,
        *topo = *topo + 1;             // Incrementa o índice do topo para apontar para a próxima posição disponível
        pilha[*topo] = valor;          // Atribui o valor passado como parâmetro à nova posição do topo
    }
}

// Função que remove (desempilha) o elemento do topo da pilha
void pilha_pop(int pilha[TAM], int *topo){
    if(pilha_vazia(*topo)){             // Verifica se a pilha está vazia usando a função pilha_vazia
        cout << "A Pilha ja esta vazia"; // Se estiver vazia, informa que não há elementos para remover
    } else {                           // Se a pilha contiver elementos,
        cout << "Valor Removido:" << pilha[*topo]; // Imprime o valor que será removido (o atual topo)
        pilha[*topo] = 0;              // Opcional: zera o valor na posição do topo (útil para depuração)
        *topo = *topo - 1;             // Decrementa o índice do topo, efetivamente removendo o elemento
    }
}

// Função que constrói (inicializa) a pilha, zerando seus elementos e definindo o topo como -1
void pilha_construtor(int pilha[TAM], int *topo){
    *topo = -1;                    // Define o índice do topo como -1 para indicar que a pilha está inicialmente vazia
    int cont;                      // Declara uma variável contador para uso no laço
    for(cont = 0; cont < TAM; cont++){   // Loop para inicializar todas as posições do vetor que representa a pilha
       pilha[cont] = 0;            // Atribui 0 a cada posição, "limpando" a pilha
    }
}

// Função principal que executa o programa
int main(){
    int pilha[TAM];              // Declara um vetor de inteiros com tamanho TAM para representar a pilha
    int topo, valorRetirado;     // Declara a variável 'topo' (para controlar o índice do topo) e 'valorRetirado' (não utilizada)
    
    pilha_construtor(pilha, &topo);  // Chama a função construtora para inicializar a pilha e definir o topo como -1
    imprime_vetor(pilha, topo);      // Exibe o estado inicial da pilha (todos os elementos zerados e topo em -1)
    
    pilha_push(pilha, 5, &topo);   // Adiciona o valor 5 à pilha utilizando a função pilha_push
    imprime_vetor(pilha, topo);    // Exibe o estado da pilha após a inserção do valor 5
    
    // Imprime o valor que está no topo da pilha (no caso, 5) e o tamanho atual da pilha
    cout << "Ultimo valor da pilha" << pilha_get(pilha, &topo);
    cout << "Tamanho da Pilha:" << pilha_tamanho(topo);
    
    // Adiciona o valor 7 à pilha diversas vezes para demonstrar a operação de empilhar
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 7, &topo);
    imprime_vetor(pilha, topo);    // Exibe o estado da pilha após múltiplas inserções
    
    pilha_pop(pilha, &topo);       // Remove o elemento do topo da pilha utilizando a função pilha_pop
    imprime_vetor(pilha, topo);    // Exibe o estado final da pilha após a remoção
    
    // Fim da execução do programa; retorna 0 para indicar que o programa encerrou corretamente
}
