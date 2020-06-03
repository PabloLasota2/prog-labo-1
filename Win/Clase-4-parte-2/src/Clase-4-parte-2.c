/*
 ============================================================================
 Name        : Clase-4-parte-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_win.h"

int main(void)
{
	int edad=0;

	utn_getEntero(&edad, "Mensjae 1","Mensaje 2",0,90,0);

	return EXIT_SUCCESS;
}
