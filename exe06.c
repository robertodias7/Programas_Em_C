#include <stdio.h>
#include <locale.h>
/*
6) Fa�a um programa que leia um n�mero inteiro e mostre o seu antecessor e seu
sucessor.
Ex:
Digite um n�mero: 9
O antecessor de 9 � 8
O sucessor de 9 � 10

*/

int main(void){
	setlocale(LC_ALL,"Portuguese");
	int num, ant, suc;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	fflush(stdin);
	
	ant = --num;
	suc = ++num + 1;
	
	printf("O antecessor de %d � %d\n", num, ant);
	fflush(stdin);
	printf("O sucessor de %d � %d", num, suc);
	
	return 0;
}
