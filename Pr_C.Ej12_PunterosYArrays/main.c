/*
 * main.c
 *
 *  Created on: 7 mar. 2021
 *      Author: eneko
 */

	typedef struct{
		float numerador;
		float denominador;
	}Fraccion;

	void sumar(Fraccion a, Fraccion b){
		Fraccion f;
		if(a.denominador == b.denominador){
			f.denominador = a.denominador;
			f.numerador = a.numerador + b.numerador;
		}else{
			f.denominador = a.denominador * b.denominador;
			f.numerador = (a.numerador*b.denominador)+(b.numerador*a.denominador);
		}
		printf("%i/%i", f.numerador,f.denominador);
	}
	int main(void){
		//1 - Declarar una variable de tipo entero
		int entero;
		//2 - Definir un tipo de datos Fracción (numerador y denominador) y una variable de este tipo
		Fraccion fr;
		//3 - Declarar un puntero a un entero
		int *pEntero;
		//4 - Declarar un puntero a una fracción
		Fraccion *pFraccion;
		//5 - Hacer que el puntero declarado en (3) apunte al entero declarado en (1)
		pEntero = &entero;
		//6 - Apuntar con el puntero de (4) a una fracción creada en memoria dinámica
		pFraccion = (Fraccion*) malloc(sizeof(Fraccion));
		//7 - Modificar el valor de la fracción (por ejemplo con 3/4) creada en (2)
		fr.numerador = 3;
		fr.denominador = 4;
		//8 - Modificar el valor de la fracción (por ejemplo con 3/4) creada en (6)
		pFraccion->numerador = 3;
		pFraccion->denominador = 4;
		//9 - Modificar el valor del entero usando el puntero declarado en (3)
		*pEntero = 7;
		//10 - Supongamos una función declarada como sumar(Fraccion a, Fraccion b).Llamarla usando las dos fracciones declaradas en (2) y (6)
		sumar(fr, *pFraccion);
		//11 - ¿Y si la funcione fuese multiplicar(Fraccion *a, Fraccion *b)? Invocarla
		//12 - Declarar un array de 5 enteros en memoria estática.
		int a1[5];
		//13 - Declarar un array de 5 fracciones en memoria dinámica.
		Fraccion *a2;
		a2 = malloc(5 * sizeof(Fraccion));
		//14 -  Modifica la posición 3 de ambos arrays.
		a1[3] = 0;
		a2[3].numerador = 3;
		a2[3].denominador = 4;
		//15 - Declarar un puntero a enteros y otro a fracciones y usarlos para manejar los array de (12) y (13). Modificar con ellos la posición 2 de los array.
		int *pe;
		Fraccion *pf;
		pe = &a1[0];
		pf = &a2[0];
		*pe = 7;
		(*pf).numerador = 3;
		(*pf).denominador = 3;
		//16 - Imprime por pantalla la dirección de memoria del entero que está en la última posición del primer array.

		//17 - Declara un puntero que apunte al puntero declarado en (3)
		int **pAPuntero;
		pAPuntero = &pEntero;
		//18 -  Usa el puntero anterior (17) para modificar el entero declarado en (1)
		pEntero = &entero;
		**pAPuntero = 30;
		//19 - Haz esto mismo con el puntero a fracción declarado en (4)

		Fraccion **pAFraccion = &fr;
		(**pAFraccion).numerador = 3;
		(**pAFraccion).denominador = 3;
		//20 - Libera la memoria que sea necesaria de este ejercicio.
		free(a2);
		free(pFraccion);
	}
