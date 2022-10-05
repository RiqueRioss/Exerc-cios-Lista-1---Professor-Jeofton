#include <stdio.h>

/* 
	2) Crie um programa que receba o valor da temperatura em Fahrenheit 
	e imprime ocorrespondente em Celsius e em Kelvin:
*/

int main(){
	float fah, cel, kel;
	
	printf("Diga a temperatura em Fahrenheit: ");
	scanf("%f", &fah);
	
	cel = (fah - 32) / 1.8;
	kel = cel + 273;
	
	printf("Ela em Celsius e %.2f\n", cel);
	printf("Ela em Kelvin e %.2f", kel);
	
}
