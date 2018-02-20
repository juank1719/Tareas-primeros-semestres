//Juan Carlos Muñoz
//Jugando Dados
//Usando if, rand(), srand(), time() y modulo.
#include <stdio.h>
int main (int argi, char** argc)
{
	int dado1, dado2, total;
	long reloj;
	reloj= time(NULL); //Trae el valor del reloj en milisegundos
	srand (reloj);
	dado1= rand()%6; //El rand genera un valor aleatorio 
	dado2= rand()%6;
	total= dado1+dado2;
	
	if (total == 7 || total==11)
	{
		printf("Ganaste con el %d\n   " , total);
	}
	else
	{
		printf("Perdiste con el%d\n   " , total);
	}
	printf ("dado1 = %d dato2 = %d = %d\n", dado1, dado2, total );
	printf ("El reloj tiene el valor de %d\n", reloj);
	return 0;


	
}
