#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main(){
	setlocale(LC_ALL,"Portuguese");
	char origem[N]={"Olá, mundo!"};
	char destino[N];
	
	printf("Antes do strcpy:\n");
	puts(origem);
	puts(destino);
	
	strcpy(destino,origem); //'destino' recebe o conteúdo de 'origem'
	
	printf("Depois do strcpy:\n");
	puts(origem);
	puts(destino);
}

/*
STRCPY- usado para alterar o conteúdo de uma string - não se usa o '='. 
String não se altera com = se altera com strcpy

STRCAT- concatena a string

STRLEN- Mostra o tamanho da string

STRCMP- compara se a string1 é igual a string2

BIBLIOTECA <locale.h> - insere os acentos nas palavras, e detro do 'main' usar
setlocale(LC_ALL,"Portuguese");

*/

