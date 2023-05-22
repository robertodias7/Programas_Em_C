#include <stdio.h>

int main(){
	char s[10];
	printf("Digite algo (scanf convencional):\n");
	scanf("%s", s);
	fflush(stdin);
	
	printf("Resultado: %s\n\n", s);
	
	printf("Digite algo scanf aprimorado):\n");
	scanf("%9[^\n]s", s); // isso aqui é o correto quando a gente vai trabalhar com scanf
	fflush(stdin);
	
	printf("Resultado: %s\n\n", s);
}

/*
-Seu eu precisar alocar um char com 10 letras, meu  vetor terá que conter um espaço
de 11 posições. A última posição tem que ter o \0 para encerrar o texto, 
a string.
10 caracteres = 11 posições

-scanf("%s", <strg>) nesse caso não é necessário usar o '&' por se tratar de um vetor
de string. Só que nesse caso o usuário não conseguirá digitar um texto sem espaço

-sintaxe aprimorada do scanf:
scanf("%<tam.-1> [^\n]s", <strg>);

-fflush(stdin) para que as leituras via teclado futuras não travem no programa

-gets não controla limite do tamanho do vetor 
-fgets faz a leitura de acordo com o tamanho do vetor 
-puts faz a leitura do resultado
*/
