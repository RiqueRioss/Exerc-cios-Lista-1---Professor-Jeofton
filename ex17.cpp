#include <stdio.h>
int main(){
	
/*
17) O quadrado de um n�mero natural n � dado pela soma dos n primeiros n�meros �mpares consecutivos. 
Por exemplo, 1�=1, 2�=1+3, 3�=1+3+5, 4�=1+3+5+7, etc. 
Dado um n�mero n, calcule seu quadrado usando a soma de �mpares ao inv�s de produto. (0,1)
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
