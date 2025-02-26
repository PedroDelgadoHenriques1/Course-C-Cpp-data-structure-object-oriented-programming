#include <stdio.h>
#include <string.h>
 
typedef struct Data{
    int dia;
    int mes;
    int ano;
}Data;

struct Aluno{
    int id;
    Data nascimento;
};
 
int main () {
    
    struct Aluno aluno1;

    aluno1.id = 15;
    aluno1.nascimento.ano = 2000;
    aluno1.nascimento.mes = 10;
    aluno1.nascimento.dia = 6;
    
    printf("nascido em %d / %d / %d\n", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);

    return 0;
}