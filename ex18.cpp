#include <stdio.h>
int main(){
	
/*
18) Fa�a um programa C que leia dez n�meros que representam as notas de dez alunos de uma disciplina. 
As notas variam de zero at� dez (0 a 10). 
O programa deve validar a entrada de dados e obter: 
a soma das notas, a m�dia das notas, a maior nota, a menor nota. 
Assuma que as notas s�o informadas corretamente no intervalo de 1 a 10. (0,1)
*/

	float nota[10], soma = 0, maior = 0, menor = 10;
	int huh;
	
	for(huh = 0; huh < 10; huh++){
		
		printf("Digite a nota %d: ", huh + 1);
		scanf("%f", &nota[huh]);
		
		if(nota[huh] < 0 || nota[huh] > 10){
			printf("Nota incompativel");
			return 0;
		}
		
		soma += nota[huh];
		
		if(nota[huh] > maior){ maior = nota[huh];
		}
		
		if(nota[huh] < menor){ menor = nota[huh];
		}
		
	}
	
	printf("A soma das notas e %.2f, a media e %.2f, a maior e %.2f e a menor e %.2f", soma, soma / 2, maior, menor);
	
}
