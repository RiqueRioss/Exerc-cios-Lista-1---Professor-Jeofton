#include <stdio.h>

/* 
	3) Escreva um programa que leia um n�mero na base decimal e em 
	seguida imprima esse mesmo n�mero nas bases octal e hexadecimal. 
*/

int main(){
	int n1;
	
	printf("Escreva um numero inteiro: ");
	scanf("%d", &n1);
	
	printf("%d em octal e %o\n", n1, n1);
	printf("%d em hexadecimal e %x", n1, n1);
}
