#include <stdio.h>
int main(){
	
/*
24) Codifique um programa que indique a quantidade mínima de cédulas equivalente a uma dada quantia. 
Considere apenas valores inteiros e cédulas de 1, 5, 10, 20, 50 e 100 reais.(0,1)
*/

	int grana, notas;
	printf("Fala a grana: ");
	scanf("%d", &grana);
	
	while(grana >= 100){
		notas++;
		grana -= 100;
	}
	while(grana >= 50){
		notas++;
		grana -= 50;
	}
	while(grana >= 20){
		notas++;
		grana -= 20;
	}
	while(grana >= 10){
		notas++;
		grana -= 10;
	}
	while(grana >= 5){
		notas++;
		grana -= 5;
	}
	while(grana >= 1){
		notas++;
		grana -= 1;
	}
	
	printf("A quantidade de notas minimas e %d", notas);
	
}
