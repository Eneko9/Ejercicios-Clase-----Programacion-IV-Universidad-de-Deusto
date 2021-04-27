/*
 * grupoVacunacion.c
 *
 *  Created on: 23 abr. 2021
 *      Author: eneko.eguiguren
 */

#include "grupoVacunacion.h"
#include "vacuna.h"
#include <stdio.h>
#include <stdlib.h>

void inicializarGrupo(GrupoVacunacion* gv, int edadMin, int edadMax, Vacuna v){
	gv->edadMin = edadMin;
	gv->edadMax = edadMax;
	gv->vacuna = v;
}

void imprimirGrupo(GrupoVacunacion* gv){
	printf("\nGrupo de vacunacion desde %i hasta %i años\nVacuna asignada: ", gv->edadMin, gv->edadMax);
	imprimirVacuna(gv->vacuna);
}

void asignarPacientes(GrupoVacunacion* gv, Paciente* p, int numPacientes){
	gv->numPacientes = numPacientes;
	gv->pacientes = malloc(sizeof(Paciente)* gv->numPacientes);
	for (int i = 0; i < gv->numPacientes; ++i) {
		strcpy
	}

}

void imprimirPacientes(GrupoVacunacion* gv){
	int tamanyo = (gv->numPacientes);
	//int* contador= 1;
	printf("Grupo de vacunacion %i:\n",1);
	for (int i = 0; i < tamanyo; ++ i) {
		printf("\t%s - %i años\n", gv->pacientes[i].dni, gv->pacientes[i].edad);
	}
	//(*contador)++;
}

char** obtenerDnisMalAsignados(GrupoVacunacion* gv, int numDnisMalAsignados){
	char** malAsignados = malloc(sizeof(Paciente)*gv->numPacientes);
	numDnisMalAsignados = 0;
	for (int i = 0; i < gv->numPacientes; ++ i) {
		if(gv->pacientes[i].edad<gv->edadMin||gv->pacientes[i].edad>gv->edadMax){
			malAsignados[numDnisMalAsignados]= gv->pacientes[i].dni;
			numDnisMalAsignados++;
		}
	}
	return malAsignados;
}

void escribirPacientes(char** dnisMalAsignados, int numMalAsignados, char* fichero){
	FILE * f;
	f = fopen(fichero,"w");
	for (int i = 0; i < numMalAsignados; ++i) {
			fprintf(f,"%s\n",dnisMalAsignados[i]);
	}
}
