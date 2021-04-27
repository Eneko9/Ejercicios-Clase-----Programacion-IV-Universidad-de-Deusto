#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vacuna.h"
#include "grupoVacunacion.h"

int main(void)
{
	Vacuna v1; v1.id = 1; strcpy(v1.nombre, "Astro-Ficus");
	Vacuna v2; v2.id = 2; strcpy(v2.nombre, "Antigua");
	Vacuna v3; v3.id = 3; strcpy(v3.nombre, "Rasputin");

	imprimirVacuna(v1);
	printf("\n");
	imprimirVacuna(v2);
	printf("\n");
	imprimirVacuna(v3);
	printf("\n");	
	
	/* PARTE 1 */printf("-----\n");

	GrupoVacunacion g1; inicialiarGrupo(&g1, 0, 45, v1);
	GrupoVacunacion g2; inicialiarGrupo(&g2, 46, 65, v2);
	GrupoVacunacion g3; inicialiarGrupo(&g3, 66, 100, v3);

	imprimirGrupo(&g1);
	imprimirGrupo(&g2);
	imprimirGrupo(&g3);
	printf("\n");
	/* PARTE 2 */printf("-----\n");
	Paciente p1 = {"11111111A", 70};
	Paciente p2 = {"22222222B", 50};
	Paciente p3 = {"33333333C", 60};
	Paciente p4 = {"44444444D", 50};
	Paciente p5 = {"55555555E", 52};
	Paciente p6 = {"66666666F", 75};


	Paciente* pacs1 = malloc(sizeof(Paciente)); pacs1[0] = p1;
	Paciente pacs2[] = {p2,p3};
	Paciente pacs3[] = {p4,p5,p6};

	asignarPacientes(&g1, pacs1, 1);
	asignarPacientes(&g2, pacs2, 2);
	asignarPacientes(&g3, pacs3, 3);
	imprimirPacientes(&g1);
	imprimirPacientes(&g2);
	imprimirPacientes(&g3);

	/* PARTE 3 */printf("-----\n");
	char** a = malloc(sizeof(char)*9*3);
	a[0] = "1111111A";
	a[1] = "2222222B";
	a[0] = "3333333C";
	escribirPacientes(a,3,"malAsignados.txt");

	free(g1.pacientes);
	free(g2.pacientes);
	free(g3.pacientes);
	free(p1.dni);
	free(p2.dni);
	free(p3.dni);
	free(p4.dni);
	free(p5.dni);
	free(p6.dni);

}

