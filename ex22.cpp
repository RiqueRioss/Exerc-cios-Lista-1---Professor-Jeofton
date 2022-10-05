#include <stdio.h>
int main(){
	
/*
22) Desenvolva um programa que leia dez números do tipo inteiro ao usuário e 
armazene esses dez números em um vetor. 
Para os valores dos elementos inseridos nas posições pares desse vetor, 
calcule o somatório deles, para os demais calcule a subtração desses valores. 
Em seguida, o programa deverá apresentar na tela os resultados. (0,1)
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
