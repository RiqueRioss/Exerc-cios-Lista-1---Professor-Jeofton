#include <stdio.h>
int main(){
	
/*
22) Desenvolva um programa que leia dez n�meros do tipo inteiro ao usu�rio e 
armazene esses dez n�meros em um vetor. 
Para os valores dos elementos inseridos nas posi��es pares desse vetor, 
calcule o somat�rio deles, para os demais calcule a subtra��o desses valores. 
Em seguida, o programa dever� apresentar na tela os resultados. (0,1)
*/

	int vetor[10], pog, soma = 0, sub = 0;
	
	for (pog = 0; pog < 10; pog++){
		printf("Digite o %d numero: ", pog);
		scanf("%d", &vetor[pog]);
		
		if(pog % 2 == 0){
			soma += vetor[pog];
		}
		else{
			sub -= vetor[pog];
		}
	}
	
	printf("A soma dos pares e %d e a substracao do impares e %d", soma, sub);
}
