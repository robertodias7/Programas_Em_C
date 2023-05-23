#include <stdio.h>
#include <locale.h>
/*2) Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boasvindas para ela:
Ex:
Qual é o seu nome? João da Silva
Olá João da Silva, é um prazer te conhecer!*/

int main(void){
	setlocale(LC_ALL,"Portuguese");
	char nome[30];
	
	printf("Qual é o seu nome?\n");
	scanf("%30[^\n]s", nome);
	
	printf("Olá, %s, é uma prazer te conhecer!", nome);
	
	return 0;
}
