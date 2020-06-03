 /*
 * utn.c
 *
 *  Created on: 3 jun. 2020
 *      Author: Pablo
 */

#include <stdio.h>
#include <stdlib.h>

int utn_getEntero(int* pResultado, char* mensaje, char* mensajeError,int valorMinimo, int valorMaximo, int cantidadReintentos)
{
	int retorno = -1;
	int bufferInt;
	if(pResultado !=NULL && mensaje != NULL && mensajeError != NULL && valorMinimo <= valorMaximo && cantidadReintentos >= 0)//Valido que ninguna direccion de memoria sea NULL y que el minimo sea siempre menor al maximo
	{
		printf("%s",mensaje);//el %S lo uso para mostrar un string
		scanf("%d",&bufferInt);
		if(bufferInt <= valorMaximo && bufferInt >= valorMinimo)
		{
			*pResultado = bufferInt;
			retorno = 0;
		}
		else
		{
			printf("%s",mensajeError);
		}

	}
	return retorno;
}
