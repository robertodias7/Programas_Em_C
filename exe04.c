#include <stdio.h>
#include <locale.h>

/*
4) Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório
entre eles.
Ex:
Digite um valor: 8
Digite outro valor: 5
A soma entre 8 e 5 é igual a 13.

*/

int main(void){
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2, soma;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	fflush(stdin);
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	fflush(stdin);
	
	soma = num1 + num2;
	
	printf("A soma entre %d + %d é = %d", num1, num2, soma);
	return 0;
}
