#include <stdio.h>
int main (){
	int dado = 10;
	printf("Dado antes do incremento: %d.\n", dado);
	
	dado++;
	printf("Dado depois do incremento: %d.\n", dado);
	
	dado--;
	printf("Depois do decremento: %d.\n", dado);
	
	dado+=3;
	printf("Incremento de 3 unidades: %d.\n", dado);
	
	dado-=2;
	printf("Decremento de 2 unidades: %d.\n", dado);
	
	dado*=2;
	printf("Multp por 2 unidades: %d.\n", dado);
	
	dado/=2;
	printf("Dividido por 2 unidades: %d.\n", dado);
}

/*
OPERADORES DE ATRIBU��O ARITM�TICA

INCREMENTO                       ++
DECREMENTO                       --
INCREMENTO GEN�RICO              +=
DECREMENTO GEN�RICO              -=
ATRIBUI��O COM MULTIPLICA��O     *=
ATRIBUI��O COM DIVIS�O           /=
*/         
