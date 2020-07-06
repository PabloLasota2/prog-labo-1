/*
 ============================================================================
 Name        : clase-6-segundo-intento.c
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
	while(1)
	{
		int auxInt;

		if(utn_getEntero(&auxInt,"Numero:\n","Error!\n",0,5,2)==0)
		{
			printf("\n%d",auxInt);
		}
		else
		{
			printf("\nDemasiados intentos cerrando programa");
		}
	}

	return EXIT_SUCCESS;
}
