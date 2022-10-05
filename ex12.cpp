#include <stdio.h>
int main(){
	
/*
12) Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael 
e informar quem é o mais velho. Considere que essas pessoas possuem idades diferentes. (0,1)
*/

	int pedro, joana, ismael;
	printf("Diga a idade de Pedro, Joana e Ismael: ");
	scanf("%d %d %d", &pedro, &joana, &ismael);
	
	if(pedro == joana && pedro == ismael && joana == ismael){
		printf("Eles possuem a mesma idade");
		return 0;
	}
	if(pedro > joana && pedro > ismael){
		printf("Pedro e o mais velho");
	}
	if(joana > pedro && joana > ismael){
		printf("Joana e a mais velha");
	}
	if(ismael > pedro && ismael > joana){
		printf("Ismael e o mais velho");
	}


}
