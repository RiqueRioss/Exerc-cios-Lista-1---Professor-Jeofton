#include <stdio.h>
int main(){
	
/*
17) O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares consecutivos. 
Por exemplo, 1²=1, 2²=1+3, 3²=1+3+5, 4²=1+3+5+7, etc. 
Dado um número n, calcule seu quadrado usando a soma de ímpares ao invés de produto. (0,1)
*/

	int huh, pog, impar = 1;
	printf("Digite um numero natural: ");
	scanf("%d", &huh);
	
	if(huh <= 0){
		printf("Numero incompativel");
		return 0;
	}

	printf("%d^2 = ", huh);
	
	for(pog = 1; pog <= huh; pog++){
		printf("%d + ", impar);
		impar += 2;
	}
	printf("\b\b  ");
}
