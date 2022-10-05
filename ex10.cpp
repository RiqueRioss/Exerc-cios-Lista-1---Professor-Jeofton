#include <stdio.h>
int main()
{
	
/*
	10) Faça um programa que receba um número inteiro e que 
	verifique se esse número é parou ímpar. 
	O programa deve informar se o número é par, 
	caso afirmativo informar também se é ou não maior que 15 
	ou se o número é ímpar, 
	caso afirmativo informar se é ou não menor que 50. (0,1)
*/
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	if (n % 2 == 0){
		printf("%d e par", n);
		if (n > 15){ printf(" e maior que 15");
		}
		if (n == 15){ printf(" e igual a 15");
		}
		if (n < 15){ printf(" e menor que 15");
		}
	}
	else{
		printf("%d e impar", n);
		if (n > 50){ printf(" e maior que 50");
		}
		if (n == 50){ printf(" e igual a 50");
		}
		if (n < 50){ printf(" e menor que 50");
		}
	}
}
