/*
 ============================================================================
 Name        : clase-4-parte-2-IntentoEnLinux.c
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
	char letra;
	int respuesta;

	respuesta = utn_getCaracter(&letra,"Letra? (A-Z)","ERROR! letra fuera de rango",'A','Z',2);

	if(respuesta == 0)
	{
		printf("\nLa letra es %c",letra);
	}
	else
	{
		printf("\nERROR!");
	}
	return EXIT_SUCCESS;
}
