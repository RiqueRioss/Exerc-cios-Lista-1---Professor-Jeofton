#include <stdio.h>
int main(){
	
/*
16) Dados um número natural n, exiba seu fatorial n!. (0,1)
*/

	int huh, fator;
	printf("Digite um numero natural: ");
	scanf("%d", &huh);
	
	if(huh <= 0){
		printf("Numero incompativel");
		return 0;
	}
	
	fator = huh;
	for(huh = huh - 1; huh > 0; huh--){
		fator *= huh;
	}
	
	printf("Seu fatorial e %d", fator);
}
