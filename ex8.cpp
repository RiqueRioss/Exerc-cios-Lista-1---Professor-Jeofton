#include <stdio.h>
int main()

/*
	8) Faça o programa que apresenta a seguinte saída, 
	perguntando ao usuário o número máximo (no exemplo, 9). 
	Este número deve ser sempre ímpar. (0,1)
	1 2 3 4 5 6 7 8 9
	  2 3 4 5 6 7 8
	    3 4 5 6 7
		  4 5 6
		    5
*/
{
	int teto;
	printf("Digite uma base impar: ");
	scanf("%d", &teto);
	
	if(teto % 2 == 0){
		printf("Precisa ser um numero impar");
		return 0;
	}
	
	int chao = 1, sussy;
	while(chao <= teto){
		for(sussy = chao; sussy <= teto; sussy++){
			printf("%d ", sussy);
		}
		printf("\n");
		
		for(sussy = 1; sussy <= chao; sussy++) { printf("  "); }
		
		chao++; teto--;
	}
}
