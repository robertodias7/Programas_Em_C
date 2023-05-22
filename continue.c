#include <stdio.h>

int main(){
	int i;
	
	for(i=0; i<10; i++){
		if(i==5){
		continue;// Pula o numero 5 no laço de repetição
		}
		printf("Numero %d\n ", i);
	}
}
