#include <stdio.h>
int main(){
	
/*
13) Dado um n�mero positivo, crie um programa que escreva todos os 
n�meros �mpares menores e/ou iguais a esse n�mero e maiores ou igual a um. (0,1)
*/

	int numero, poggers;
	printf("Diga um numero para ver todos os impares menores ou iguais a ele: "); scanf("%d", &numero);
	
	for(poggers = 1; poggers <= numero; ){
		printf("%d\n", poggers);
		poggers += 2;
	}
	
}
