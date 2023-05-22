#include <stdio.h>

int main(){
	int v[5];
	int i;
	
	for(i=0; i<5; i++){ 
		printf("Insira um dado \n"); 
		scanf("%d", &v[i]);
	/*Dados serão inseridos até completar o tamanho do vetor
	que vai de 0 a 4.
	Quando o laço de repetição acabar, no próximo comando aparecerá o resultado.
	*/
	}
	printf("Dados inseridos: \n ");
	for(i=0 ; i<5; i++){
		printf("%d ", v[i]); //Resultado do laço de Repetição acima
	}
}
