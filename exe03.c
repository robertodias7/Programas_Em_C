#include <stdio.h>
#include <locale.h>
/*
3) Crie um programa que leia o nome e o salário de um funcionário, mostrando no
final uma mensagem.
Ex:
Nome do Funcionário: Maria do Carmo
Salário: 1850,45
O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.*/

int main(void){
	setlocale(LC_ALL,"Portuguese");
	char nome[20];
	float salario;
	
	printf("Nome do Funcionário: ");
	scanf("%30[^\n]s", nome);
	fflush(stdin);
	
	printf("Salário: ");
	scanf("%f", &salario);
	fflush(stdin);
	
	printf("O funcionário %s tem um salário de R$%7.2f", nome,salario);
	
	return 0;
}
