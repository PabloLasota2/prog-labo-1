
#include <stdio_ext.h>
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

int utn_getEntero(int* pResultado, char* mensaje, char* mensajeError,int valorMinimo, int valorMaximo, int cantidadReintentos)
{
	int retorno = -1;
	int bufferInt;
	if(pResultado !=NULL && mensaje != NULL && mensajeError != NULL && valorMinimo <= valorMaximo && cantidadReintentos >= 0)//Valido que ninguna direccion de memoria sea NULL y que el minimo sea siempre menor al maximo
	{
		do
		{
			printf("%s",mensaje);//el %S lo uso para mostrar un string
			scanf("%d",&bufferInt);
			if(bufferInt <= valorMaximo && bufferInt >= valorMinimo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				cantidadReintentos--;
			}
		}while(cantidadReintentos >= 0);
	}
	return retorno;
}

int utn_getFlotante(float* pResultado, char* mensaje, char* mensajeError,float valorMinimo, float valorMaximo, int cantidadReintentos)
{
	int retorno = -1;
	float bufferFloat;
	if(pResultado !=NULL && mensaje != NULL && mensajeError != NULL && valorMinimo <= valorMaximo && cantidadReintentos >= 0)//Valido que ninguna direccion de memoria sea NULL y que el minimo sea siempre menor al maximo
	{
		do
		{
			printf("%s",mensaje);
			scanf("%f",&bufferFloat);
			if(bufferFloat <= valorMaximo && bufferFloat >= valorMinimo)
			{
				*pResultado = bufferFloat;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				cantidadReintentos--;
			}
		}while(cantidadReintentos >= 0);
	}
	return retorno;
}

int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError,char valorMinimo, char valorMaximo, int cantidadReintentos)
{
	int retorno = -1;
	char bufferChar;
	if(pResultado !=NULL && mensaje != NULL && mensajeError != NULL && valorMinimo <= valorMaximo && cantidadReintentos >= 0)//Valido que ninguna direccion de memoria sea NULL y que el minimo sea siempre menor al maximo
	{
		do
		{
			printf("%s",mensaje);
			__fpurge(stdin);
			scanf("%c",&bufferChar);
			if(bufferChar <= valorMaximo && bufferChar >= valorMinimo)
			{
				*pResultado = bufferChar;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				cantidadReintentos--;
			}
		}while(cantidadReintentos >= 0);
	}
	return retorno;
}

int utn_imprimirArrayInt(int arrayInt[],int arrayLen)
{
	int retorno = -1;
	if(arrayInt != NULL && arrayLen > 0)
	{
		retorno = 0;
		for(int i = 0; i < arrayLen; i++)
		{
			printf("%d\n",arrayInt[i]);
		}
	}
	return retorno;
}

int utn_ordenarArrayIntMayor(int* pArray, int arrayLen)
{
	int retorno = -1;
	int flagSwap;
	int buffer;
	int limite;

	if(pArray != NULL && arrayLen >= 0)
	{
		limite = arrayLen -1;
		retorno = 0;
		do
		{
			flagSwap = 0;
			for(int i = 0; i < limite; i++)
			{
				if(pArray[i] < pArray[i+1])
				{
					flagSwap = 1;
					buffer = pArray[i];
					pArray[i] = pArray[i+1];
					pArray[i+1] = buffer;
				}
			}
			limite--;
		}while(flagSwap);
	}
	return retorno;
}

int utn_ordenarArrayIntMenor(int* pArray, int arrayLen)
{
	int retorno = -1;
	int flagSwap;
	int buffer;
	int limite;

	if(pArray != NULL && arrayLen >= 0)
	{
		limite = arrayLen -1;
		retorno = 0;
		do
		{
			flagSwap = 0;
			for(int i = 0; i < limite; i++)
			{
				if(pArray[i] < pArray[i+1])
				{
					flagSwap = 1;
					buffer = pArray[i];
					pArray[i] = pArray[i+1];
					pArray[i+1] = buffer;
				}
			}
			limite--;
		}while(flagSwap);
	}
	return retorno;
}
