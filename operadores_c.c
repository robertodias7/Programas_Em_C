#include <stdio.h>

int main(){
	int A, B, soma, subtr, multpc, divis, resto;
	
	printf("Digite o primeiro n�mero: \n");
	scanf("%d", &A);
	
	printf("Digite o segundo n�mero: \n");
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
OPERADORES ARITM�TICOS
SOMA                       +
SUBTRA��O                  -
MULTIPLICA��O              *
DIVIS�O                    /
RESTO DA DIVIS�O INTEIRA   %
*/
