#include <stdio.h>
#include <locale.h>
//1) Escreva um programa que mostre na tela a mensagem "Ol�, Mundo!"

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	printf("Ol�, Mundo!");
	return 0;
}
