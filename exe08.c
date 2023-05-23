#include <stdio.h>
#include <locale.h>

/*
8) Desenvolva um programa que leia uma distância em metros e mostre os valores
relativos em outras medidas.
Ex:
Digite uma distância em metros: 185.72
A distância de 85.7m corresponde a:
0.18572Km
1.8572Hm
18.572Dam
1857.2dm
18572.0cm
185720.0mm*/
int main(void){
	setlocale(LC_ALL,"Portuguese");
	setlocale(LC_NUMERIC, "pt_BR");
	float distancia, m, km, hm, dam, dm, cm, mm;
	
	printf("Digite a distâcia em metros: ");
	scanf("%f", &distancia);
	fflush(stdin);
	
	km = distancia / 1000; 
	hm = distancia /100;
	dam = distancia / 10;
	dm = distancia * 10;
	cm = distancia * 100;
	mm = distancia * 1000;
	
	
	printf("A distância de %fm/s corresponde a:\n",distancia);
	printf("%.5fKm\n", km);
	printf("%.4fHm\n", hm);
	printf("%.3fDam\n", dam);
	printf("%.1fdm\n", dm);
	printf("%.1fcm\n", cm);
	printf("%.1fmm\n", mm);
	
	
	return 0;
}
