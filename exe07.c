#include <stdio.h>
#include <locale.h>

/*
7) Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a
sua terça parte.
Ex:
Digite um número: 3.5
O dobro de 3.5 é 7.0
A terça parte de 3.5 é 1.16666
*/

int main(void){
	setlocale(LC_ALL,"Portuguese");
	float num, dobro, terca;
	
	printf("Digite um número: ");
	scanf("%f", &num);
	
	dobro = num * 2;
	terca = num / 3;
	
	printf("O dobro de %.1f é %.1f\n", num, dobro);
	printf("A terça parte de %.1f é %f", num, terca);
	
	return 0;
}
