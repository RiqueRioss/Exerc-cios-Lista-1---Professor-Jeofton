#include <stdio.h>
int main(){
	
/*
23) Escreva um programa que solicite seis números do tipo inteiro 
ao usuário e os armazene em um vetor, 
depois o programa deverá apresentar na tela os números na 
ordem inversa do qual foram digitados. (0,1)
*/

	int vetor[6], pog;
	
	for(pog = 0; pog < 6; pog++){
		printf("Digite o %d numero: ", pog);
		scanf("%d", &vetor[pog]);
	}
	
	for(pog = 5; pog >= 0; pog--){
		printf("\"%d\" ", vetor[pog]);
	}
}
