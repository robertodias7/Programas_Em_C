#include <stdio.h>

int main(){
	int v[5];
	int i;
	
	for(i=0; i<5; i++){ 
		printf("Insira um dado \n"); 
		scanf("%d", &v[i]);
	/*Dados ser�o inseridos at� completar o tamanho do vetor
	que vai de 0 a 4.
	Quando o la�o de repeti��o acabar, no pr�ximo comando aparecer� o resultado.
	*/
	}
	printf("Dados inseridos: \n ");
	for(i=0 ; i<5; i++){
		printf("%d ", v[i]); //Resultado do la�o de Repeti��o acima
	}
}
