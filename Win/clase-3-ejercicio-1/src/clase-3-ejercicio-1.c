/*
 ============================================================================
 Name        : clase-3-ejercicio-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*EJERCICIO
 * Realizar un programa que pida un numero al usuario
 * que pida una opcion (+, -, *, /)
 * pedir otro numero para operar
 * ejecute una la funcion corespondiendte (sumaDosEnteros(), restaDosEnteros(), multiplicaDosEnteros(), divideDosEnteros())
 * mostrar el resultado al usuario
 *
 * NOTA: recordar que el resultado de la division puede ser un flotante
 *
 */

#include <stdio.h>
#include <stdlib.h>

int utn_sumaDosEnteros(int a, int b);
int utn_restaDosEnteros(int a, int b);
int utn_multiplicaDosEnteros(int a, int b);
int utn_divideDosEnteros(int a, int b);


int main(void)
{

	setbuf(stdout, NULL);

	int num1;
	int num2;
	int resultado;
	int opcion;

	printf("\nIngrese el primer numero(ENTERO) a para operar:");
	scanf("%d",&num1);
	printf("\n\nIngrese la operacion"
			"\n1-Suma"
			"\n2-Resta"
			"\n3-Multiplicacion"
			"\n4-Division\n\n");
	scanf("%d",&opcion);

	switch(opcion)
	{
		case 1:
		{
			printf("\n\nIngrese el numero que va a sumar a %d: ",num1);
			scanf("%d", &num2);
			resultado = utn_sumaDosEnteros(num1,num2);
			printf("El resultado es %d", resultado);
			break;
		}
		case 2:
		{
			printf("\n\nIngrese el numero que va a restar a %d: ",num1);
			scanf("%d",&num2);
			resultado = utn_restaDosEnteros(num1,num2);
			printf("El resultado es %d", resultado);
			break;
		}
		case 3:
		{
			printf("\n\nIngrese el numero que va a restar a %d: ",num1);
			scanf("%d",&num2);
			resultado = utn_multiplicaDosEnteros(num1, num2);
			printf("El resultado es %d", resultado);
			break;
		}
		case 4:
		{
			printf("\n\nIngrese el numero que va a restar a %d: ",num1);
			scanf("%d",&num2);
			resultado = utn_divideDosEnteros(num1, num2);
			printf("El resultado es %d", resultado);
			break;
		}
		default:
			break;
	}

	return EXIT_SUCCESS;
}

int utn_sumaDosEnteros(int a, int b)
{
	int res;
	res = a + b;
	return res;
}

int utn_restaDosEnteros(int a, int b)
{
	int res;
	res = a - b;
	return res;
}

int utn_multiplicaDosEnteros(int a, int b)
{
	int res;
	res = a * b;
	return res;
}

int utn_divideDosEnteros(int a, int b)
{
	int res;
	res = a / b;
	return res;
}
