
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define CANT_EDADES 5

int main(void)
{
	int edades[CANT_EDADES];
	int respuesta;

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
	utn_imprimirArrayInt(edades,CANT_EDADES);

	return EXIT_SUCCESS;
}

