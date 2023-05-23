#include <stdio.h>
#include <locale.h>
//1) Escreva um programa que mostre na tela a mensagem "Olá, Mundo!"

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	printf("Olá, Mundo!");
	return 0;
}
