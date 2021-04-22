/*
 * censo.c
 *
 *  Created on: 11 abr. 2021
 *      Author: eneko
 */

#include "censo.h"
#include <stdlib.h>
#include <stdio.h>

;
int cuantasPersonas(Persona* ap, int tamanyo, int edad){
	int contador = 0;
	for (int i = 0; i < tamanyo; ++i) {
		if(ap[i].edad < edad){
			contador++;
		}else{}
	}
	return contador;
}
