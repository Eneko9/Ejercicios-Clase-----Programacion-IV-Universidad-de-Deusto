/*
 * main.c
 *
 *  Created on: 18 mar. 2021
 *      Author: eneko
 */
#include <stdlib.h>
#include <stdio.h>
#include "strings.h"

void main(void){
	char* c = malloc(5*sizeof(char));
	c[0]='H';
	c[1]='o';
	c[2]='l';
	c[3]='a';
	c[4]='\0';
	//imprimir mi string
	printString(c);
	//imprimir la longitud de mi string
	printf("%i \n", length(c));
	fflush(stdout);
	//copiar mi string en uno nuevo, e imprimir el nuevo
	char* x = malloc(sizeof(char) * (length(c)+1));
	copyString(x, c);
	printString(x);
	//concatenar el primer string con el nuevo
	char* c3 = malloc(5*sizeof(char));
	c3[0]='H';
	c3[1]='o';
	c3[2]='l';
	c3[3]='i';
	c3[4]='\0';
	concat(c3, c );
	fflush(stdout);
	printString(c3);




}
