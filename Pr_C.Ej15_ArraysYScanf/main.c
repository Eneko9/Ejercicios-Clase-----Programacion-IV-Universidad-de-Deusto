/*
 * main.c
 *
 *  Created on: 21 mar. 2021
 *      Author: eneko
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int id;
	char* nombre;
	float nota;
}Asignatura;

void menu();

float media();

Asignatura* asigs [5];

int asignaturasIntroducidas = 0;

int main(void){
	//Crear menu.
	menu();

	//Liberar memoria.
	for(int i = 0; i < asignaturasIntroducidas;i++){
		free( (*asigs[i]).nombre);
	}

	return 0;
}
void menu(){
	fflush(stdout);
	char* opciones[] = {"Introducir asignatura", "Mostrar listado", "Calcular media"};
	for(int i = 0; i<3;i++){
		printf("\n\t|%i.%s", i+1, opciones[i]);
	}printf("\n\tPulsar 'q' para salir");

	char c;
	fflush(stdin);
	scanf("%c", &c);
	printf("%c", c);


		int asignaturasMax = 5;
		if(c == '1'){
			if(asignaturasIntroducidas<asignaturasMax){
				asigs[asignaturasIntroducidas] = malloc(sizeof(Asignatura));
				printf("\nIntroduce id de la asignatura: \n");
				int id;
				fflush(stdin);
				scanf("%i", &id);

				printf("\nIntroduce nombre de la asignatura: \n");
				fflush(stdin);
				char* nombre = malloc(sizeof(char) * (20));
				fgets(nombre, 20, stdin);
				sscanf(nombre, "%s", nombre);

				printf("\nIntroduce nota de la asignatura (/10): \n");
				float nota;
				fflush(stdin);
				scanf("%f", &nota);

				asigs[asignaturasIntroducidas]->id = id;
				asigs[asignaturasIntroducidas]-> nota = nota;
				asigs[asignaturasIntroducidas]->nombre = nombre;

				asignaturasIntroducidas++;

				menu();
	}
		}
		else if(c == '2'){
			for(int i; i< asignaturasIntroducidas; i++){
				printf("\n%i.%s, ID: %i, NOTA: %f\n", i, asigs[i]->nombre, asigs[i]->id, asigs[i]-> nota);
			}
			menu();

		}
		else if(c == '3'){
			printf("Media de las asignaturas: %f\n", media());
			menu();


		}
		else if(c == 'q'){

		}
		else ;
}
float media(){
	if(asignaturasIntroducidas>0){
		float f;
		for(int i = 0; i<asignaturasIntroducidas; i++){
			f += asigs[i]->nota;
		}
		return (f/asignaturasIntroducidas);
	}else return 0.0;
}

