/*
 * main.c
 *
 *  Created on: 11 abr. 2021
 *      Author: eneko
 */

#include "persona.h"
#include "censo.h"
#include <stdio.h>
#include <stdlib.h>


int main(void){
	fflush(stdout);
	Persona p1 = {"Eneko", 19};
	Persona p2 = {"Nerea", 19};
	Persona p3 = {"Beñat", 22};
	Persona p4 = {"Jon", 37};
	Persona p5 = {"Iker", 12};
	Persona* pers;
	pers = malloc(sizeof(Persona) * 5);
	pers[0]=p1;
	pers[1]=p2;
	pers[2]=p3;
	pers[3]=p4;
	pers[4]=p5;
	for (int i = 0; i < 5; ++i) {
		printf("%s tiene %i años.\n", pers[i].nombre, pers[i].edad);
	}
	printf("Hay %i personas menores de %i años\n", cuantasPersonas(pers, 5, 20), 20);

}
