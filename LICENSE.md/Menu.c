#include <stdio.h> //Librerias Estandar
#include <stdlib.h>
#include "Areas.h" //Librerias Propias

/*Funcion que despliega el menu sobre la pantalla */
int Menu (void)
{
	int op; 
	system("cls");
	printf("\n\n\n");
	printf("\t\t\tOperaciones que puedes realizar en este programa\n ");
	printf("\t\t\t================================================\n ");
	printf("\t\t\tArea del Cuadrado   >-1\n");
	printf("\t\t\tArea del Circulo    >-2\n");
	printf("\t\t\tArea del triangulo  >-3\n");
	printf("\t\t\tSalida              >-4\n");
	printf("\t\t\tPrecione el numero de la operacion que desea ralizar: ");	
	scanf ("%d", &op);
	return op;
}
