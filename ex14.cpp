#include <stdio.h>
int main(){
	
/*
14) A convers�o de graus Fahrenheit para Celsius � obtida por Tc={(Tf-32)x(5/9)}, 
em que Tc � a temperatura em Celsius e Tf em Fahrenheit. 
fa�a um programa C que calcule e que imprima uma tabela de graus Fahrenheit e graus Celsius, 
cujos graus variem de 40 a 75, de 1 em 1. (0,1)
*/
	int cel;
	for(cel = 40; cel <= 75; cel++){
		printf("%d graus celsius e igual a %.2f\n", cel, (1.8 * cel) + 32 );
	}
}
