#include <stdio.h>
int main(){
	
/*
	6) Fa�a um programa que l� o pre�o de um produto e inflaciona esse pre�o em 10% 
	se ele for menor que 100 e em 20% se ele for maior ou igual a 100. 
	OBS: n�o use o comando "if"ou o operador de condi��o "?". 
*/

	float n1, n2;
	
	printf("Diga o preco do produto: ");
	scanf("%f", &n1);
	
	while(n1 < 100){
		n2 = n1 * 1.1;
		printf("O preco inflacionado e %.2f", n2);
		break;
	}
	
	while(n1 >= 100){
		n2 = n1 * 1.2;
		printf("O preco inflacionado e %.2f", n2);
		break;
	}
}
