#include <stdio.h>
int main()
{
	
/*
	10) Fa�a um programa que receba um n�mero inteiro e que 
	verifique se esse n�mero � parou �mpar. 
	O programa deve informar se o n�mero � par, 
	caso afirmativo informar tamb�m se � ou n�o maior que 15 
	ou se o n�mero � �mpar, 
	caso afirmativo informar se � ou n�o menor que 50. (0,1)
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
