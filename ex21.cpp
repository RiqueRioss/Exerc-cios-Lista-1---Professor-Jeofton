#include <stdio.h>
int main(){
	
/*
21) Escreva um programa que leia doze números do tipo inteiro ao usuário. 
Separe esses números em pares e ímpares e os armazenem em dois outros vetores 
separando pares e ímpares, exibindo os resultados na tela. (0,1)
*/

	int numero[12], par[12], impar[12], huh;
	
	for(huh = 0; huh < 12; huh++){
		printf("Diga o %d inteiro: ", huh + 1);
		scanf("%d", &numero[huh]);
	}
	
	int par2 = 0, impar2 = 0;
	
	for(huh = 0; huh < 12; huh++){
		if(numero[huh] % 2 == 0){
			par[par2] = numero[huh];
			par2++;
		}
		else{
			impar[impar2] = numero[huh];
			impar2++;
		}
	}
	
	printf("Numeros pares: ");
	for(huh = 0; huh < par2; huh++){
		printf("%d ", par[huh]);
	}
	
	printf("\nNumeros impares: ");
	for(huh = 0; huh < impar2; huh++){
		printf("%d ", impar[huh]);
	}
}
