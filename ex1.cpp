#include <stdio.h>
#include <math.h>

/* 
	1) Faça um programa que solicite 2 números e informe: 
	a soma dos números, 
	o produto do primeiro número pelo quadrado do segundo, 
	o quadrado do primeiro número, 
	a raiz quadradada soma dos quadrados, 
	o seno da diferença do primeiro número pelo segundo e 
	o módulo do primeiro número.
*/

int main(){
	float n1, n2, op1, op2, op3, op4, op5, op6;
	
	printf("Diga 2 números: ");
	scanf("%f %f", &n1, &n2);
	
	op1 = n1 + n2;
	op2 = (n2 * n2) * n1;
	op3 = n1 * n1;
	op4 = sqrt((n1 * n1) + (n2 * n2));
	op5 = sin(n1 / n2);
	op6 = abs(n1);
	
	printf("Soma dos números: %.2f\n", op1);
	printf("Produto do primeiro pelo quadrado do segundo: %.2f\n", op2);
	printf("Quadrado do primeiro: %.2f\n", op3);
	printf("Raiz da soma dos quadrados: %.2f\n", op4);
	printf("Seno da diferença do primeiro para o segundo: %.2f\n", op5);
	printf("Módulo do primeiro número: %.2f\n", op6);
	
}
