#include <stdio.h>

int main(){
	float m;
	
	printf("Digite a pontuacao do candidato: \n");
	scanf("%f", &m);
	
	if(m>=5 && m<=7){
		printf("Aprovado!\n");
	}
	
}

/*
OPERADORES LÓGICOS

Conjução && -> É verdadeiro quando tudo for verdade
Disjunção || -> É verdadeiro se ao menos 1 for verdade
Inversão ! -> Negação - Verdadeiro quando o operando for falso
*/
