#include <stdio.h>
#include <locale.h>
/*
6) Faça um programa que leia um número inteiro e mostre o seu antecessor e seu
sucessor.
Ex:
Digite um número: 9
O antecessor de 9 é 8
O sucessor de 9 é 10

*/

int main(void){
	setlocale(LC_ALL,"Portuguese");
	int num, ant, suc;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	fflush(stdin);
	
	ant = --num;
	suc = ++num + 1;
	
	printf("O antecessor de %d é %d\n", num, ant);
	fflush(stdin);
	printf("O sucessor de %d é %d", num, suc);
	
	return 0;
}
