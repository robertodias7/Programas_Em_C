#include <stdio.h>
#include <locale.h>
/*2) Fa�a um programa que leia o nome de uma pessoa e mostre uma mensagem de boasvindas para ela:
Ex:
Qual � o seu nome? Jo�o da Silva
Ol� Jo�o da Silva, � um prazer te conhecer!*/

int main(void){
	setlocale(LC_ALL,"Portuguese");
	char nome[30];
	
	printf("Qual � o seu nome?\n");
	scanf("%30[^\n]s", nome);
	
	printf("Ol�, %s, � uma prazer te conhecer!", nome);
	
	return 0;
}
