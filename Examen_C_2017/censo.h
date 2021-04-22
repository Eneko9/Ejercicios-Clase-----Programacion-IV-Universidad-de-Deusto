/*
 * censo.h
 *
 *  Created on: 11 abr. 2021
 *      Author: eneko
 */

#include "persona.h"
#ifndef CENSO_H_
#define CENSO_H_

typedef struct{
	int numPersonas;
	Persona* personas;
	float edadMedia;
}GrupoPersonas;

int cuantasPersonas(Persona* ap, int tamanyo, int edad);
GrupoPersonas recuperarJovenes(Persona* ap, int tamanyo);
Persona* recuperarYogurin(Persona* ap, int tamanyo);
#endif /* CENSO_H_ */
