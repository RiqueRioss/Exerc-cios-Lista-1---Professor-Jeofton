#include <stdio.h>
int main(){

/*
	7) Implemente um programa que solicita as notas das duas provas feitas 
	por cada um dos alunos de uma turma (as notas têm de estar no intervalo [0 10]) 
	e imprime para cada um a média das notas. 
	O programa deve parar imediatamente após ter sido digitado 
	o valor 50 paraa nota da primeira prova.
*/
	int alunos;
	printf("Quantidade de alunos na turma: ");
	scanf("%d", &alunos); printf("\n");
	
	float notas[alunos][2], media;
	int pog, tog;
	
	for(pog = 0; pog < alunos; pog++){
		
		for(tog = 0; tog < 2; tog++){
			
			printf("Diga a nota %d do aluno %d: ", tog+1, pog+1);
			scanf("%f", &notas[pog][tog]); printf("\n");
			
			if(notas[pog][tog] == 50 || notas[pog][tog] < 0 || notas[pog][tog] > 10){
				printf("Nota não suportada"); printf("\n");
				return 0;
			}
		}
	}
	
	for(pog = 0; pog < alunos; pog++){
		media = (notas[pog][0] + notas[pog][1]) / 2;
		printf("A media do aluno %d foi %.2f", pog+1, media); printf("\n");
	}
}
