/*
 ============================================================================
 Name        : clase-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//DECLARO LAS VARIABLES
	float resultado;
	int numero1;
	int numero2;
	int respuesta;

	//PIDO LOS DATOS QUE VOY A USAR EN MI FUCNION
	printf("\nPrimer Numero:");
	scanf("%d",&numero1);
	printf("\nSegundo Numero:");
	scanf("%d",&numero2);

	//COMPRUEBO SI LA RESPUESTA ES VALIDA O NO
	respuesta = dividir(&resultado, numero1, numero2);

	//VALIDO LA RESPUESTA, PARA SABER SI HUBO O NO ALGUN ERROR
	if(respuesta == 0)
	{
		printf("\n\nEl resultado es: %f", resultado);
	}
	else
	{
		printf("\n\nNo es posible divir por 0");
	}

	return EXIT_SUCCESS;
}

int dividir (float* pResultado, int num1, int num2)//el (*) me hace que no reciba lo que hay en la VAR resultado sino la direccion de memoria del mismo
{

}
