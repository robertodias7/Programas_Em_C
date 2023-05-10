#include <stdio.h>

int main(){
	int A, B, soma, subtr, multpc, divis, resto;
	
	printf("Digite o primeiro número: \n");
	scanf("%d", &A);
	
	printf("Digite o segundo número: \n");
	scanf("%d", &B);
	
	soma = A + B;
	subtr = A - B;
	multpc = A * B;
	divis = A / B;
	resto = A % B;
	
	printf("Resultados \n\n");
	printf("Soma: %d\n", soma);
	printf("Subtracao: %d\n",subtr);
	printf("Multiplicacao: %d\n", multpc);
	printf("Divisao: %d \n", divis);
	printf("Resto: %d \n", resto);	
}



/*
OPERADORES ARITMÉTICOS
SOMA                       +
SUBTRAÇÃO                  -
MULTIPLICAÇÃO              *
DIVISÃO                    /
RESTO DA DIVISÃO INTEIRA   %
*/
