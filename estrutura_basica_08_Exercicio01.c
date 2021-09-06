//OPERADORES LOGICOS &&  || 
// PROGRAMA QUE PERGUNTA SE VOCÊ  ESTÁ COM FOME E SE TEM  ou NÃO DINHEIRO CASO AMBAS AS RESPOSTAS SEJAM VERDADEIRAS ME MOSTRE A SEGUINTE MENSAGEM:
// "Vá a lanchonete do pier do CEUB, ela vende uma comida muito boa" , 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>   // BIBLIOTECA acentuação de caracteres

// Função principal do programa 
void main () {
	// Definindo idioma 
	setlocale (LC_ALL, "portuguese");
	
	// Definindo variáveis
	char fome , dinheiro ;
	
	// pergunta 
	
	printf("Você tem dinheiro? Digite [s] PARA SIM ou [N] para NÃO\n");
	scanf ("%s",&dinheiro);
	
		printf("Você está com fome? Digite [s] PARA SIM ou [N] para NÃO\n");
	scanf ("%s",&fome);
	
	if ( fome == 's' &&  dinheiro == 's'){
		printf("\n Vá a lanchonete do pier do CEUB, ela vende uma comida muito boa");
	}else {
		printf("Acredito que isso não seja possível\n");
	}
	
	
	//pausa o programa após executar
	system("pause");
	
}
