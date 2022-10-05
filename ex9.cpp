#include <stdio.h>
int main(){
	
/*
	9) Escreva um programa que leia 3 notas de um aluno e a média (ME) 
	das notas dosexercícios realizados por ele. 
	Calcular a média de aproveitamento, usando a fórmula: 
	MA =(N1 + N2*2 + N3*3 + ME)/7. 
	A partir da média, informar o conceito de acordo com a tabela:
	(0,1)
	maior ou igual a 9 A
	maior ou igual a 7.5 e menor que 9 B
	maior ou igual a 6 e menor que 7.5 C
	maior ou igual a 4 e menor que 6 D
	menor que 4 E
*/
	float n1, n2, n3, media, mediaa;
	
	printf("Diga as 3 notas do aluno: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	media = (n1 + n2 + n3) / 3;
	printf("A media foi %.2f\n", media);
	
	mediaa = (n1 + n2*2 + n3*3 + media) / 7;
	printf("A media de aproveitamento foi %.2f\n", mediaa);
	
	if(mediaa >= 9){ printf("O conceito foi A");
	}
	if(mediaa < 9 && mediaa >= 7.5){ printf("O conceito foi B");
	}
	if(mediaa < 7.5 && mediaa >= 6){ printf("O conceito foi C");
	}
	if(mediaa < 6 && mediaa >= 4){ printf("O conceito foi D");
	}
	if(mediaa < 4){ printf("O conceito foi E");
	}
}
