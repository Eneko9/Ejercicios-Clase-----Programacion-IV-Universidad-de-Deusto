/*
 * punto.c
 *
 *  Created on: 8 abr. 2021
 *      Author: eneko
 */
#include "punto.h"
#include <math.h>


float distancia(Punto p1, Punto p2){
	int restaX;
	int restaY;
	restaX = p1.x - p2.x;
	restaY = p1.y - p2.y;
	return sqrtf((powf(restaX,2)+powf(restaY,2)));
}
void trasladarXY(Punto *p1, Punto *p2, int x, int y){
	p1->x= p1->x + x;
	p2->x = p2->x + x;
	p1->y = p1->y + y;
	p2->y = p2->y + y;
}
