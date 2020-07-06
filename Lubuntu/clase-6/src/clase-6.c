/*
 ============================================================================
 Name        : clase-6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"

#define CANT_EDADES 5

int main(void)
{
	char nombre[10];
	char aux[50];
	char buffer[256];
	int auxInt;
	int i;

	/*
	 *strcpy(nombre,"JUAN");//Esta es la manera de guardar en (nombre) la plabla ("JUAN"), es como hacer (nombre = "JUAN")
	 *strcpy(nombre,"JUAN");//Esta strcpy(nombre,aux); // Tambien se puedce guardar un string dentro de otro
	 *
	 * Las funiones STRCPY sin la N de por medio
	 * se consideran como funciones inseguras
	 */

	//strncpy(aux,nombre,sizeof(aux));//el (sizeof) copiara tambien el TAMAÑO de aux, la misma da el tamaño FISICO que ocupa el string

	//strnlen(nombre,sizeof(nombre));//esta funcion cuenta solo los espacios ocupados(la version insegura), la version segura cuenta y se asegura de no pasarse de los espacios de momira

	//strncat(aux,"LALA",sizeof(nombre)); // le va a CONCATENAR a (nombre) lo que le escriba en la segunda condicion, en este caso ("LALA")

	//sprintf(nombre,"HOLA pedazo de puto",sizeof(nombre));// copia todo el texto en la variable (nombre), por lo tanto todo eso se va a imprimir en solo un (printf) que contenga %s
	//la manera cortecta de usarlo es junto a un strncpy para copiar desde un buffer
	//o usando la forma segura (snprintf)

	//snprintf(nombre,sizeof(nombre),"esto es simplemente relleno");//como segundo parametro le pasamos el size de la variable en cuestion

	while(1)
	{
		if(utn_getEntero(&auxInt,"\nNUMERO","\nERROR!",0,2,2) == 0)
			{
				printf("\nEl numero es: %d", auxInt);
			}
			else
			{
				printf("ERROR!!!!");
			}
	}
	return EXIT_SUCCESS;
}
