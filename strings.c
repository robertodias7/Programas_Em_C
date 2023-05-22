#include <stdio.h>

int main(){
	char s[10];
	printf("Digite algo (scanf convencional):\n");
	scanf("%s", s);
	fflush(stdin);
	
	printf("Resultado: %s\n\n", s);
	
	printf("Digite algo scanf aprimorado):\n");
	scanf("%9[^\n]s", s); // isso aqui � o correto quando a gente vai trabalhar com scanf
	fflush(stdin);
	
	printf("Resultado: %s\n\n", s);
}

/*
-Seu eu precisar alocar um char com 10 letras, meu  vetor ter� que conter um espa�o
de 11 posi��es. A �ltima posi��o tem que ter o \0 para encerrar o texto, 
a string.
10 caracteres = 11 posi��es

-scanf("%s", <strg>) nesse caso n�o � necess�rio usar o '&' por se tratar de um vetor
de string. S� que nesse caso o usu�rio n�o conseguir� digitar um texto sem espa�o

-sintaxe aprimorada do scanf:
scanf("%<tam.-1> [^\n]s", <strg>);

-fflush(stdin) para que as leituras via teclado futuras n�o travem no programa

-gets n�o controla limite do tamanho do vetor 
-fgets faz a leitura de acordo com o tamanho do vetor 
-puts faz a leitura do resultado
*/
