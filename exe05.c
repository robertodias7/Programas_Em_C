#include <stdio.h>
#include <locale.h>
/*5) Faça um programa que leia as duas notas de um aluno em uma matéria e mostre
na tela a sua média na disciplina.
Ex:
Nota 1: 4.5
Nota 2: 8.5
A média entre 4.5 e 8.5 é igual a 6.5*/

int main(void){
	setlocale(LC_ALL,"Portuguese");
	float nota1, nota2, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	fflush(stdin);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	fflush(stdin);
	
	media = (nota1 + nota2) / 2;
	
	printf("A média entre %.f + %.f = %.1f",nota1, nota2, media);
	return 0;
	
}
