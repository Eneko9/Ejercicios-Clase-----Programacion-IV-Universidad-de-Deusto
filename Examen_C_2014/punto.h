/*
 * punto.h
 *
 *  Created on: 8 abr. 2021
 *      Author: eneko
 */

#ifndef PUNTO_H_
#define PUNTO_H_

typedef struct {
	int x;
	int y;
}Punto;

float distancia(Punto p1, Punto p2);
void trasladarXY(Punto *p1, Punto *p2, int x, int y);

#endif /* PUNTO_H_ */
