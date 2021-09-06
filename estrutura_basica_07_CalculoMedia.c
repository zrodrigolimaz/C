// #EXERCICIO 
// Programa que pergunta o nome do aluno calcula a média e me diz se ele foi aprovado ou não

#include <stdio.h>
#include <stdlib.h>

int main  (){
	
	// Declarando variáveis
	float nota1, nota2, nota3, nota4;
	float media;
	char nome[30];
	// Nome do aluno 
	printf ("\n Entre com o nome do aluno:");
	scanf  ("%s", &nome);
	
	// Notas
	
	printf("Informe a 1a. nota:\n");
	scanf ("%f",&nota1);
	
		printf("Informe a 2a. nota:\n");
	scanf ("%f",&nota2);
	
		printf("Informe a 3a. nota:\n");
	scanf ("%f",&nota3);
	
		printf("Informe a 4a. nota:\n");
	scanf ("%f",&nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	if (media >= 7.0)
		printf("O aluno %s foi  aprovado", nome);
	else if (media <7.0)
	printf ("O aluno %s foi  reprovado", nome);
	
	return 0;	
	
	
	
	
	

}
