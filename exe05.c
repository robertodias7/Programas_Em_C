#include <stdio.h>
#include <locale.h>
/*5) Fa�a um programa que leia as duas notas de um aluno em uma mat�ria e mostre
na tela a sua m�dia na disciplina.
Ex:
Nota 1: 4.5
Nota 2: 8.5
A m�dia entre 4.5 e 8.5 � igual a 6.5*/

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
	
	printf("A m�dia entre %.f + %.f = %.1f",nota1, nota2, media);
	return 0;
	
}
