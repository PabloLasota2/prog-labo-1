/*
 * utn.c
 *
 *  Created on: 2 jun. 2020
 *      Author: pablo
 */

#include <stdio.h>
#include <stdlib.h>

int utn_dividir(float* pCosiente, int dividendo, int divisor)// uso el * para poder trabajar sobre la direccion de memoria donde se enteccntra esa variable
{
	int retorno = -1;//siempre tomo como parte que el programa va a estar mal
	if(pCosiente != NULL && divisor != 0)// siempre que reciba un puntero nos vamos a preguntar si ese puntero es distinto de NULL para asegurarme que recibi un espacio en memoria con algo dentro
	{
		*pCosiente = (float) dividendo / divisor;//casteo uno de los operadores a FLOAT para que el me arroje un float en el resultado
		retorno = 0;//si se cumple y se realiza lo que nosotros queremos lo igualamos el anterior retorno a 0
	}
	return retorno;
}
