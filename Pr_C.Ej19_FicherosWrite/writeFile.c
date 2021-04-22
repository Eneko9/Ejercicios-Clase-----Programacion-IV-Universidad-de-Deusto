/*
 * writeFile.c
 *
 *  Created on: 25 mar. 2021
 *      Author: eneko
 */

#include <stdio.h>

#define MAX_NUM 10

int main (void){
	int i;
	FILE * f;
	f = fopen("ejercicio_fichero.txt","w");
	fprintf(f,"Escribiendo %i numeros\n",MAX_NUM);
	for (i = 0; i < MAX_NUM; ++i) {
		fprintf(f,"%i\n",i);
	}
}


