/*
 * poligono.h
 *
 *  Created on: 8 abr. 2021
 *      Author: eneko
 */

#include "punto.h"
#ifndef POLIGONO_H_
#define POLIGONO_H_

typedef struct {
	int numVertices;
	Punto *vertices;
} Poligono;

void imprimirPoligono(Poligono poli);
float perimetro(Poligono poli);
void liberar(Poligono poli);
#endif /* POLIGONO_H_ */
