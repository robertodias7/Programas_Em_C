#include <stdio.h>
#include <locale.h>
/*
3) Crie um programa que leia o nome e o sal�rio de um funcion�rio, mostrando no
final uma mensagem.
Ex:
Nome do Funcion�rio: Maria do Carmo
Sal�rio: 1850,45
O funcion�rio Maria do Carmo tem um sal�rio de R$1850,45 em Junho.*/

int main(void){
	setlocale(LC_ALL,"Portuguese");
	char nome[20];
	float salario;
	
	printf("Nome do Funcion�rio: ");
	scanf("%30[^\n]s", nome);
	fflush(stdin);
	
	printf("Sal�rio: ");
	scanf("%f", &salario);
	fflush(stdin);
	
	printf("O funcion�rio %s tem um sal�rio de R$%7.2f", nome,salario);
	
	return 0;
}
