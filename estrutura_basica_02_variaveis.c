#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// void , função principal , onde não retorna nada|| void = vazia. Função vazia  
void main(){

    //Definindo Variáveis
    int a;
    float b;
    char c;
    bool d;

    //Passando Valores
    a = 5;
    b = 2.3;
    c = 'a';
    d = true; //true = 1, false = 0

    //Escrevendo na Tela
    printf("\n O valor de a = %d", a);   //  "\n" serve para pular para a linha de baixo quando executamos o código (quando é mostrado na tela)
    printf("\n O valor de b = %.1f", b);
    printf("\n O valor de c = %c", c);
    printf("\n O valor de d = %d\n", d);

    //Pausa o programa depois de ser executado. 
    system("pause");

}
