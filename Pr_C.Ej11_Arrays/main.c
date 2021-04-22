/*
 * main.c
 *
 *  Created on: 4 mar. 2021
 *      Author: eneko
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int x;
	int y;
}Point;

void escalar(int *a, Point *p, int size){
	int i;
	for (i = 0; i < size; ++i) {
		p[i].x *=a[i];
		p[i].y *=a[i];

	}
}
int main(void){
	//Ej 11.a{

	// Array de enteros de forma estatica
	int a1[3];

	a1[0] = 1;
	a1[1] = 2;
	a1[2] = 3;
	//

	//Array de puntos de forma dinamica
	Point *a2;
	a2 = malloc(3* sizeof(Point));

	a2[0].x = 2;
	a2[0].y	= 4;
	a2[1].x = 2;
	a2[1].y = 4;
	a2[2].x = 2;
	a2[2].y = 4;
	//

	int size = 3;
	escalar(a1,a2,size);

	int i;
	for (i = 0; i < size; ++i) {
		printf("El punto numero %i del array es: (x = %i, y = %i) \n", i+1, a2[i].x, a2[i].y);
	}
	// }

	// Ej 11.b {

	Point**aPunterosAPuntos;
	 aPunterosAPuntos = malloc(sizeof(Point*) * 3);

	 //Creo los puntos
	 aPunterosAPuntos[0] = malloc(sizeof(Point));
	 aPunterosAPuntos[1] = malloc(sizeof(Point));
	 aPunterosAPuntos[2] = malloc(sizeof(Point));

	 //cambio los puntos
	 aPunterosAPuntos[0] -> x = 2;
	 aPunterosAPuntos[0] -> y = 2;
	 aPunterosAPuntos[1] -> x = 3;
	 aPunterosAPuntos[1] -> y = 3;
	 aPunterosAPuntos[2] -> x = 4;
	 aPunterosAPuntos[2] -> y = 4;

	//}
}
