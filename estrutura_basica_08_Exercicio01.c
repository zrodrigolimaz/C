//OPERADORES LOGICOS &&  || 
// PROGRAMA QUE PERGUNTA SE VOC�  EST� COM FOME E SE TEM  ou N�O DINHEIRO CASO AMBAS AS RESPOSTAS SEJAM VERDADEIRAS ME MOSTRE A SEGUINTE MENSAGEM:
// "V� a lanchonete do pier do CEUB, ela vende uma comida muito boa" , 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>   // BIBLIOTECA acentua��o de caracteres

// Fun��o principal do programa 
void main () {
	// Definindo idioma 
	setlocale (LC_ALL, "portuguese");
	
	// Definindo vari�veis
	char fome , dinheiro ;
	
	// pergunta 
	
	printf("Voc� tem dinheiro? Digite [s] PARA SIM ou [N] para N�O\n");
	scanf ("%s",&dinheiro);
	
		printf("Voc� est� com fome? Digite [s] PARA SIM ou [N] para N�O\n");
	scanf ("%s",&fome);
	
	if ( fome == 's' &&  dinheiro == 's'){
		printf("\n V� a lanchonete do pier do CEUB, ela vende uma comida muito boa");
	}else {
		printf("Acredito que isso n�o seja poss�vel\n");
	}
	
	
	//pausa o programa ap�s executar
	system("pause");
	
}
