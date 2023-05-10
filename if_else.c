#include <stdio.h>

int main(){
	float nota;
	
	printf("Digite a sua nota\n");
	scanf("%f", &nota);
	
	if(nota >= 7){
	printf("Aprovado(a)!");	
	}else{
		printf("Reprovado(a)!");
	}
}
