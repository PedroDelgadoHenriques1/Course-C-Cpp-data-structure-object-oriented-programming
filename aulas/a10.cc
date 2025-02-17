#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

void main(){
    ///permite usar acentos
    setlocale(LC_ALL,"");
    printf("Olá");

    int a = 5;
    printf("%d", a);
}