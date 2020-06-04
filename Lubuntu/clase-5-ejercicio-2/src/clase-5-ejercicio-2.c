
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define CANT_EDADES 5

void promedio(int* pResultado, int arrayInt[], int arrayLen);

int main(void)
{
	int edades[CANT_EDADES];
	int respuesta;
	int resultado;
	int i;

	for(int i = 0; i < CANT_EDADES; i++)
	{
		respuesta = utn_getEntero(&edades[i],"\nIngrese edad(0-99)","Error esa edad no esta en el rango pedido\n",0,99,2);
			if(respuesta == 0)
			{
				printf("Carga Correcta!\n\n");
			}
			else
			{
				printf("\nFallo demasiado, el programa se terminara!");
				break;
			}
	}

	promedio(&resultado,edades,CANT_EDADES);

	printf("%d", resultado);
	return EXIT_SUCCESS;
}

void promedio(int* pResultado, int arrayInt[], int arrayLen)
{
	int acum = 0;
	for(int i = 0; i < arrayLen; i++)
	{
		acum = acum + arrayInt[i];
	}
	*pResultado = acum / arrayLen;
}
