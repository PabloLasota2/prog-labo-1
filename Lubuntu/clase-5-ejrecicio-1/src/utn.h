
#ifndef UTN_H_
#define UTN_H_

int utn_dividir(float* cosiente, int dividendo, int divisor);
int utn_getEntero(int* pResultado, char* mensaje, char* mensajeError,int valorMinimo, int valorMaximo, int cantidadReintentos);
int utn_getFlotante(float* pResultado, char* mensaje, char* mensajeError,float valorMinimo, float valorMaximo, int cantidadReintentos);
int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError,char valorMinimo, char valorMaximo, int cantidadReintentos);


#endif /* UTN_H_ */
