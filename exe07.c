#include <stdio.h>
#include <locale.h>

/*
7) Crie um algoritmo que leia um n�mero real e mostre na tela o seu dobro e a
sua ter�a parte.
Ex:
Digite um n�mero: 3.5
O dobro de 3.5 � 7.0
A ter�a parte de 3.5 � 1.16666
*/

int main(void){
	setlocale(LC_ALL,"Portuguese");
	float num, dobro, terca;
	
	printf("Digite um n�mero: ");
	scanf("%f", &num);
	
	dobro = num * 2;
	terca = num / 3;
	
	printf("O dobro de %.1f � %.1f\n", num, dobro);
	printf("A ter�a parte de %.1f � %f", num, terca);
	
	return 0;
}
