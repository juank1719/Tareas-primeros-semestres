#include <stdio.h> //Librerias Estandar
#include <stdlib.h>
#include "Areas.h" //Librerias Propias
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float r, base, altura, resultado;
	int option = 0;
	while (option < 4)
	{
		option = Menu();
		switch (option)
		{
			case 1:
			{
				system("cls");
				printf("\t\t\t========== Area del Circulo ===========\n");
                Cuadrado ();
                system("pause");
  				 //Llamando a la funcion 
				break;
			}
			//El Area del cuadrado
			case 2:
			{
				// Area del circulo
				system("cls");
				printf("\t\t\t========== Area del Circulo ===========\n");
				printf("\t\t\tValor del radio -> ");
				scanf("%f", &r);
				Circulo (r);
				break;
			}
			case 3:
			{
				
				//area del triangulo
				printf("\t\t\t========== Area del Triangulo ===========\n\n");
				printf("\t\t\tDame la base y altura (B,A) ->");
				scanf("%f, %f", &base, &altura);
				resultado = Triangulo(base, altura);
				printf("\t\t\tEl area del triangulo es de -> %.2f" , &resultado);
				system("pause");
				
				break;
			}
			default:
			{
				//salida
				break;
			}
		

		}
	}
	return 0;
}
