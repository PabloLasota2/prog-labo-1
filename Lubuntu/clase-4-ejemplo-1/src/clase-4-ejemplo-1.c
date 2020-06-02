/*
 ============================================================================
 Name        : clase-4-ejemplo-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


int main(void)
{
	float resultado;
	int num1;
	int num2;
	int respuesta;

	printf("\nEscriba un Numero:");
	scanf("%d",&num1);
	printf("\nEscriba otro Numero:");
	scanf("%d",&num2);

	respuesta = utn_dividir(&resultado, num1, num2);//uso un & para llamar a la direccion de memoria de resultado, ya que quiero escribir sobre esa misma variable
	if(respuesta == 0)//Valido que la funcion se halla hecho correctamente
	{
		printf("\nEl cosiente de la division es: %f",resultado);
	}
	else
	{
		printf("No es posible dividir por 0.");
	}

	return EXIT_SUCCESS;
}


