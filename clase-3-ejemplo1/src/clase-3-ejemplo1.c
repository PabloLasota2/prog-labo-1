/*
 ============================================================================
 Name        : clase-3-ejemplo1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int utn_sumaDosEnteros(int a, int b); //Prototipo de la fucncion

int main(void)
{


	int num1;
	int num2;
	int resultado;

	printf("Ingrese numero entero para operar:");
	scanf("%d",&num1);
	printf("Ingrese numero entero para operar:");
	scanf("%d",&num2);

	resultado = utn_sumaDosEnteros(num1,num2);

	printf("El resultado de la suma es: %d", resultado);
}


//Funciones Auxiliares

int utn_sumaDosEnteros(int a, int b) //suma dos numeros enteros que nos llegan del usuarios
{
	int res;
	res = a + b;
	return res;
}
