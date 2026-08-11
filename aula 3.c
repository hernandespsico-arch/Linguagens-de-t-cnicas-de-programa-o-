#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

int main(int argc, char *argv[]) {
// area do circulo	
	float raio, area, raioQuadrado;
	
	printf("Insira o valor de R: \n");
	scanf("%f", &raio);
	
	raioQuadrado = raio*raio;
	area = pi * raioQuadrado;
	
	printf("A area do circulo de raio %f = %f", raio, area);
	
	// area do trapézio descendente, brill
	float B,b, h,areaT;
	printf("Area do Trapezio de lado B: %f; b%f h:%f = %f", scanf("%f", &B),scanf("%f",&b),scanf("%f",&h), (((B+b)*h)/2));
	
	return 0;
}
