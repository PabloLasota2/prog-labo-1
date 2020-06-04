/*
 ============================================================================
 Name        : clase-especial-ORDENAMIENTO.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define CANT_EMPLEADOS 9

int ordenarArrayInt(int* pArray, int arrayLen);

int main(void)
{
	int edades[CANT_EMPLEADOS] = {54,26,93,17,77,31,44,55,27};

	utn_imprimirArrayInt(edades,CANT_EMPLEADOS);

	ordenarArrayInt(edades,CANT_EMPLEADOS);

	utn_imprimirArrayInt(edades,CANT_EMPLEADOS);

	return EXIT_SUCCESS;
}

int ordenarArrayInt(int* pArray, int arrayLen)
{
	int retorno = -1;
	int buffer;

	if(pArray != NULL && arrayLen >= 0)
	{
		for(int i = 0; i < arrayLen-1; i++)
		{
			for(int j = i+1; j < arrayLen; j++)
			{
				if(pArray[i] < pArray[i+1])
				{
					buffer = pArray[i];
					pArray[i] = pArray[j];
					pArray[j] = buffer;
				}
			}
		}
	}
	return retorno;
}
