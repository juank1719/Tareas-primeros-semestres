#include <stdio.h> //Librerias Estandar
#include <stdlib.h>
#include "Areas.h" //Librerias Propias

void Cuadrado (void)
{
	float lado1;
	printf("\t\t\tDame el valor de un lado del cuadrado -> ");
	scanf("%f", &lado1);
	printf("\t\t\tEl Area es de %.2f\n\n", lado1*lado1);
	return;
	

}
