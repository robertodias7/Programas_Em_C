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
OPERADORES L�GICOS

Conju��o && -> � verdadeiro quando tudo for verdade
Disjun��o || -> � verdadeiro se ao menos 1 for verdade
Invers�o ! -> Nega��o - Verdadeiro quando o operando for falso
*/
