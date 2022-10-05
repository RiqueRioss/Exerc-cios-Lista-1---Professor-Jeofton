#include <stdio.h>
int main(){
	
/*
19) Escreva um programa para informar o maior elemento de um vetor de 5 posições do tipo inteiro. (0,1)
*/

	int vetor[5], pog, maior;
	
	printf("Digite o %d inteiro: ", pog);
	scanf("%d", &vetor[0]);
	
	maior = 0;
	
	for(pog = 1; pog < 5; pog++){
		printf("Digite o %d inteiro: ", pog);
		scanf("%d", &vetor[pog]);
		
		if(vetor[pog] > vetor[maior]){
			maior = pog;
		}
	}
	
	printf("O maior esta na posicao %d", maior);
	
}
