#include<stdio.h>

int main(){
	int idade = 0;
	float peso = 0.00;
	
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	
	printf("Digite seu peso: \n");
	scanf("%f", &peso);
	
	printf("Sua idade: %d anos\n", idade);
	printf("Seu peso: %.2f Kg\n", peso);
	
	/*
	printf -> escreve na tela
	scanf -> Quarda o valor das variáveis
	*/
}
