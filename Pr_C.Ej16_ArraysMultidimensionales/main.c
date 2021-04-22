/*
 * main.c
 *
 *  Created on: 11 mar. 2021
 *      Author: eneko
 */
#include <stdio.h>
#include <stdlib.h>


typedef struct{
	float x;
	float y;
}Point;

int main (void){

	//100% ESTATICO
	Point a[5][4][3];
	a[2][3][1].x = 3;
	a[2][3][1].y = 4;
	printf("Punto en array estatico --> (%f,%f)\n",a[2][3][1].x, a[2][3][1].y);
	fflush(stdout);

	//ESTATICO/DINAMICO
	Point* a2[5][4];

	int i;
	for(i=0;i<5;i++){
		int j;
		for (j = 0; j < 4; ++j) {
			a2[i][j] = malloc(3*sizeof(Point));
		}
	}
	a[2][3][1].x = 3;
	a[2][3][1].y = 4;
	printf("Punto en array estatico/dinamico --> (%f,%f)\n",a[2][3][1].x, a[2][3][1].y);
	fflush(stdout);

	for(i=0;i<5;i++){
		int j;
		for (j = 0; j < 4; ++j) {
				free(a2[i][j]);
		}
	}

	//100% DINAMICO
	Point *** a3;

	a3 = malloc(5*sizeof(Point**));
	int i2;
	for (i2 = 0; i2 < 5; ++i2) {
		a3[i2] = malloc(4*sizeof(Point*));
		int j2;
		for (j2 = 0; j2 < 4; ++j2) {
			a3[i2][j2] = malloc(3*sizeof(Point));
		}
	}
	printf("Punto en array dinamico --> (%f,%f)\n",a[2][3][1].x, a[2][3][1].y);
	fflush(stdout);

	for(i2=0;i2<5;i2++){
			int j2;
			for (j2 = 0; j2 < 4; ++j2) {
					free(a2[i][j2]);
					free(a2[i]);
			}
			free(a3);
		}

}
