#include <stdio.h>
#include <string.h>

void main()
{
	char *a, *b;
	*a = "abacate";
	*b = "uva";
	if(strcmp(a,b)<0)
	printf("%s vem antes do %s no dicionário\n", a, b);
	else
	printf("%s vem depois do %s no dicionário", a, b);	
}
