#include <stdio.h>
#include <math.h>

/* 
	1) Fa�a um programa que solicite 2 n�meros e informe: 
	a soma dos n�meros, 
	o produto do primeiro n�mero pelo quadrado do segundo, 
	o quadrado do primeiro n�mero, 
	a raiz quadradada soma dos quadrados, 
	o seno da diferen�a do primeiro n�mero pelo segundo e 
	o m�dulo do primeiro n�mero.
*/

int main(){
	float n1, n2, op1, op2, op3, op4, op5, op6;
	
	printf("Diga 2 n�meros: ");
	scanf("%f %f", &n1, &n2);
	
	op1 = n1 + n2;
	op2 = (n2 * n2) * n1;
	op3 = n1 * n1;
	op4 = sqrt((n1 * n1) + (n2 * n2));
	op5 = sin(n1 / n2);
	op6 = abs(n1);
	
	printf("Soma dos n�meros: %.2f\n", op1);
	printf("Produto do primeiro pelo quadrado do segundo: %.2f\n", op2);
	printf("Quadrado do primeiro: %.2f\n", op3);
	printf("Raiz da soma dos quadrados: %.2f\n", op4);
	printf("Seno da diferen�a do primeiro para o segundo: %.2f\n", op5);
	printf("M�dulo do primeiro n�mero: %.2f\n", op6);
	
}
