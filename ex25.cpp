#include <stdio.h>
int main(){
	
/*
25) Fa�a um programa que l� um conjunto de 10 valores inteiros e 
verifica se algum dos valores � igual a m�dia dos mesmos. (0,1)
*/

	int vetor[10], pog;
	float media = 0;
	
	for(pog = 0; pog < 10; pog++){
		printf("Digite o %d numero: ", pog);
		scanf("%d", &vetor[pog]);
		media += vetor[pog];
	}
	
	printf("Media: %f", media / 10);
	
	for(pog = 0; pog < 10; pog++){
		if(vetor[pog] == media){
			printf("O valor %d na posicao %d e igual a media\n", vetor[pog], pog);
		}
	}
	
}
