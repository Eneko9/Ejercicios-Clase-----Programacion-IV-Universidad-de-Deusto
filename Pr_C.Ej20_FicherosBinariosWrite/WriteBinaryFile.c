/*
 * WriteBinaryFile.c
 *
 *  Created on: 25 mar. 2021
 *      Author: eneko
 */
#include <stdio.h>

typedef struct{
	float x;
	float y;
}Point;


int main(void){
	Point a = {2,4};
	Point b = {3,2};
	Point c = {1,8};
	Point d = {7,5};
	Point array [4] = {a,b,c,d};

	FILE * f;
	f = fopen("ejercicio_ficheroBinario.txt", "wb");

	fwrite(array, sizeof(Point), 4,f);
	fclose(f);

}
