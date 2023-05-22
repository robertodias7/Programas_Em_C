#include <stdio.h>

int main(){
	#define texto "Entrada e saída de dados."
	
	char nome[50]= "";
	int idade = 0;
	float altura = 0.00;
	printf("%s\n\n", texto);
	printf("Digite seu nome: \n");
	scanf("%s", &nome);
	
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	
	printf("Digite sua altura \n");
	scanf("%f", &altura);
	
	printf("Dados Informados\n\n");
	printf("Nome: %s\n", nome);
	printf("Idade: %d \n", idade);
	printf("Altura: %.2f\n", altura);
	

}
