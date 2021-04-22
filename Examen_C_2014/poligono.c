/*
 * poligono.c
 *
 *  Created on: 8 abr. 2021
 *      Author: eneko
 */
#include "poligono.h"
#include <stdio.h>

int i;
void imprimirPoligono(Poligono poli) {

	int x;
	int y;
	for (i = 0; i < poli.numVertices; ++i) {
		x = poli.vertices[i].x;
		y = poli.vertices[i].y;
		printf("(%i, %i)\n", x, y);
	}

	float perimetro(Poligono poli) {
		float perimetro;
		for (i = 0; i < poli.numVertices - 1; ++i) {
			perimetro += distancia(poli.vertices[i], poli.vertices[i + 1]);
		}
		perimetro += distancia(poli.vertices[poli.numVertices],
				poli.vertices[0]);
		return perimetro;
	}
	void liberar(Poligono poli){
		free(poli.vertices);
	}
}

