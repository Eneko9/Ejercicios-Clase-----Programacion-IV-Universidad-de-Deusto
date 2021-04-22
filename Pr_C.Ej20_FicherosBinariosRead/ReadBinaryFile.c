/*
 * ReadBinaryFile.c
 *
 *  Created on: 25 mar. 2021
 *      Author: eneko
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	float x;
	float y;
}Point;

int main(void){
	//MAL
	Point array[4];

	FILE * f;
	f = fopen("ejercicio_ficheroBinario.txt","rb");

	fread(array, sizeof(Point), 4, f);

	int i;
	for (i = 0; i < 4; ++i) {
		printf("(%f,%f)\n", array[i].x, array[i].y);
	}
	fclose(f);
}
