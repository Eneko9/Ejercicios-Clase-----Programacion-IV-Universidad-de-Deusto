/*
 * main.c
 *
 *  Created on: 8 abr. 2021
 *      Author: eneko
 */
#include "punto.h"
#include "poligono.h"
#include <stdlib.h>
#include <stdio.h>

void imprimePuntosYDistancia(Punto p1, Punto p2);
float perimetro(Poligono poli);

int main(void) {

	Punto p = { 1, 2 };
//	printf("(%i, %i)\n", p.x, p.y);
//
//	//1.1
	Punto p1 = { 3, 4 };
	Punto p2 = { 5, 6 };
	Punto p3 = { 7, 8 };
//
//	//1.3
//	printf("-----EJERCICIO 1.3-----\n");
//	imprimePuntosYDistancia(p1, p2);
//	trasladarXY(&p1, &p2, 5, 6);
//	printf("Despues de trasladar los puntos...\n");
//	imprimePuntosYDistancia(p1, p2);
//	//modificacion 1.3
//	printf("-----EJERCICIO 1.3 Modificado-----\n");
//	printf("Coordenada X del primer punto: \n");
//	scanf("%i", &(p1.x));
//	printf("Coordenada Y del primer punto: \n");
//	scanf("%i", &(p1.y));
//	printf("Coordenada X del segundo punto: \n");
//	scanf("%i", &(p2.x));
//	printf("Coordenada Y del segundo punto: \n");
//	scanf("%i", &(p2.y));
//	imprimePuntosYDistancia(p1, p2);
//	trasladarXY(&p1, &p2, 5, 6);
//	printf("Despues de trasladar los puntos...\n");
//	imprimePuntosYDistancia(p1, p2);

//2.2
	Poligono poli;
	poli.numVertices = 4;
	poli.vertices = malloc(sizeof(Punto) * poli.numVertices);
	poli.vertices[0] = p;
	poli.vertices[1] = p1;
	poli.vertices[2] = p2;
	poli.vertices[3] = p3;

	imprimirPoligono(poli);
	printf("%f\n", perimetro(poli));

}

void imprimePuntosYDistancia(Punto p1, Punto p2) {
	printf("(%i, %i)\n", p1.x, p1.y);
	printf("(%i, %i)\n", p2.x, p2.y);
	printf("Distancia = %f\n", distancia(p1, p2));
}
//Esta funcion perimetro deberia ir en poligono.c, pero daba un error.
float perimetro(Poligono poli) {
	int i;
	float perimetro = 0;
	for (i = 0; i < poli.numVertices - 1; ++i) {
		perimetro += distancia(poli.vertices[i], poli.vertices[i + 1]);
	}
	perimetro += distancia(poli.vertices[poli.numVertices - 1], poli.vertices[0]);
	return perimetro;
}
