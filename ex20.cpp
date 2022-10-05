#include <stdio.h>
#include <string.h>
int main(){
	
/*
20) Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética.(0,1)
*/

	char nome1[50], nome2[50];
	printf("Escreva dois nomes: ");
	scanf("%s %s", nome1, nome2);
	
	printf("Em ordem alfabetica: ", nome1, nome2);
	
	if(strcmp(nome1, nome2) < 0){
		printf("%s e %s", nome1, nome2);
	}
	else{
		printf("%s e %s", nome2, nome1);
	}
}
