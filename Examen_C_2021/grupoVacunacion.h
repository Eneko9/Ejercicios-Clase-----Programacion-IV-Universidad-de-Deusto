/*
 * grupoVacunacion.h
 *
 *  Created on: 23 abr. 2021
 *      Author: eneko.eguiguren
 */

#include "vacuna.h"
#ifndef GRUPOVACUNACION_H_
#define GRUPOVACUNACION_H_

typedef struct{
	char* dni ;
	int edad;
}Paciente;

typedef struct{
	int edadMin;
	int edadMax;
	Vacuna vacuna;
	Paciente* pacientes;
	int numPacientes;
}GrupoVacunacion;



void inicialiarGrupo(GrupoVacunacion* gv, int edadMin, int edadMax, Vacuna v);
void imprimirGrupo(GrupoVacunacion* gv);
void asignarPacientes(GrupoVacunacion* gv, Paciente* p, int numPacientes);
void imprimirPacientes(GrupoVacunacion* gv);
char** obtenerDnisMalAsignados(GrupoVacunacion* gv, int numDnisMalAsignados);
void escribirPacientes(char** dnisMalAsignados, int numMalAsignados, char* fichero);

#endif /* GRUPOVACUNACION_H_ */
