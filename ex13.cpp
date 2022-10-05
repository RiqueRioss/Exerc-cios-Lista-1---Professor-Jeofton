#include <stdio.h>
int main(){
	
/*
13) Dado um número positivo, crie um programa que escreva todos os 
números ímpares menores e/ou iguais a esse número e maiores ou igual a um. (0,1)
*/

	int numero, poggers;
	printf("Diga um numero para ver todos os impares menores ou iguais a ele: "); scanf("%d", &numero);
	
	for(poggers = 1; poggers <= numero; ){
		printf("%d\n", poggers);
		poggers += 2;
	}
	
}
