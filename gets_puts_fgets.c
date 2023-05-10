#include <stdio.h>

int main(){
	char s[10];
	printf("Digite algo (leitura pelo gets):\n");
	gets(s); //Leitura com gets
	fflush(stdin);
	
	puts("Resultado:"); //impressão com puts
	puts(s);
	puts("");
	
	printf("Digite algo (leitura pelo fgets):\n");
	fgets(s, 10, stdin);// leitura com fgets (leitura(s), tamanho(10), stdin
	fflush(stdin);
	
	puts("Resultado:");
	puts(s);
}
