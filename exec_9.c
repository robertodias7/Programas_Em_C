#include <stdio.h>

int main(){
	int lin,col,cont = 0, mat[4][4];
	for(lin=0; lin<=3; lin++)
	{
		for(col=0;col<=3; col++)
		{
			mat[lin][col]=cont++;
		}
	}
	for(lin=0;lin<=3;lin++)//campo que falta
	{
		for(col=0;col<=3;col++)//campo que falta
		{
			if(lin != col)//campo que falta
			printf("%d", mat[lin][col]);
			printf("\t");
		}
		printf("\n");
	}
	printf("\n\n");
	system("pause");
	return 0;
}
