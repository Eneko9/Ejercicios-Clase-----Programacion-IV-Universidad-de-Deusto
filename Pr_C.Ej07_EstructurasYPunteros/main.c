/*
 * main.c
 *
 *  Created on: 25 feb. 2021
 *      Author: eneko
 */
#include <stdio.h>

typedef struct{
	int x;
	int y;
}Point;



void escalar( Point *p, int num){
	(*p).x += num;
	(*p).y += num;
}

int main(void){
	Point p1 = {4,5};
	escalar(&p1,10);
	printf("Valores del punto: x = %d ; y = %d", p1.x, p1.y);
}
