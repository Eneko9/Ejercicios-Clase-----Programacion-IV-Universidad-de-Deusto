/*
 * readFile.c
 *
 *  Created on: 25 mar. 2021
 *      Author: eneko
 */

#include <stdio.h>

int main(void){

	char c;
	int num_lineas = 0;

	FILE* f;
	f = fopen("ejercicio_fichero.txt","r");

	while((c = fgetc(f)) != EOF){

		if(c == '\n'){
			num_lineas++;
		}
	putchar(c);
	}

	fclose(f);

	printf("El fichero tiene %i lineas\n", num_lineas);

}
