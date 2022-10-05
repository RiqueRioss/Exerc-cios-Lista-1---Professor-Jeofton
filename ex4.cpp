#include <stdio.h>
int main(){
	
/*
	4) Faça um programa que lê dois valores e imprime:
	a) se o primeiro valor for menor que o segundo, 
	   a lista de valores do primeiro até o segundo;
	b) se o primeiro valor for menor que o segundo a 
	   lista de valores do segundo até o primeiroem ordem decrescente;
	c) se ambos forem iguais a mensagem "valores iguais".
*/
	
	float n1, n2;
	
	printf("Escreva dois numeros: ");
	scanf("%f %f", &n1, &n2);
	
	if(n1 > n2){
		printf("O primeiro valor e %f e o segundo %f", n1, n2);
	}
	if(n1 < n2){
		printf("O segundo valor e %f e o primeiro %f", n2, n1);
	}
	if(n1 == n2){
		printf("Ambos sao iguais");
	}
}
