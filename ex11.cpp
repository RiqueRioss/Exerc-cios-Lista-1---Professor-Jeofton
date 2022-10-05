#include <stdio.h>
int main(){
	
/*
11) Codifique um programa que leia a quantidade de alunas e de alunos. 
Depois esse programa deve informar se essa turma possui mais alunos ou mais alunas. 
Se essa turma possuir a quantidade de alunas maior que a de alunos, 
informe o total de alunos dessa turma.
O programa deve verificar se a quantidade de alunos é igual a de alunas. (0,1)
*/
	
	int alunos, alunas;
	printf("Diga a quantidade de meninos e depois de meninas na turma: ");
	scanf("%d %d", &alunos, &alunas);
	
	if(alunos == alunas){
		printf("A turma tem a mesma quantidade de meninos e meninas");
		return 0;
	}
	if (alunos > alunas){
		printf("Essa turma possui mais meninos que meninas");
	}
	else{
		printf("Essa turma possui mais meninas que meninos e o total de alunos e %d", alunos + alunas);
	}

}
