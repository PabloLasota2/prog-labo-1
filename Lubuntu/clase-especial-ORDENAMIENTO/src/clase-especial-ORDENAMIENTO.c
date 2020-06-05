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


int main(void)
{
	int edades[CANT_EMPLEADOS] = {54,26,93,17,77,31,44,55,27};

	utn_imprimirArrayInt(edades,CANT_EMPLEADOS);

	utn_ordenarArrayIntMenor(edades,CANT_EMPLEADOS);

	utn_imprimirArrayInt(edades,CANT_EMPLEADOS);

	return EXIT_SUCCESS;
}


