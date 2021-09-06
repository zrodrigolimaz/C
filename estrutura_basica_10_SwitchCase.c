#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){

    //Definindo Variáveis
    int a;
    
    printf("Digite uma opcao [1] [2] [3] \n");
    scanf("%d", &a);

    // Código de exemplo com if
    
	/*  
	if(a == 1){
        printf("\n Opcao escolhida: 1");
    }else if(a == 2){
        printf("\n Opcao escolhida: 2");
    }else if(a == 3){
        printf("\n Opcao escolhida: 3");
    }else{
        printf("\n Opcao invalida");
    } 
	*/
    
    
    // O mesmo código de cima, adaptado ao switch case
    
    switch (a) {
    	case 1:
    		printf("\n Opcao escolhida: 1");
    		break;
    	case 2:
			printf("\n Opcao escolhida: 2");
			break;	
    	case 3:
			printf("\n Opcao escolhida: 3");
			break;	
		default:
			printf("\n Opcao invalida");
			break;		
	}


    //Pausa o programa após executar
    system("pause");

}
