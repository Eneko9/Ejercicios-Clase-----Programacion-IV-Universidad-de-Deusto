/*
 * Alumno.h
 *
 *  Created on: 13 may. 2021
 *      Author: eneko
 */

#include "Persona.h"
#ifndef ALUMNO_H_
#define ALUMNO_H_

class Alumno: public Persona{
	private:
		int numAsignaturas;
		float notas[numAsignaturas];
	public:
		Alumno();
		Alumno(char* nombre);
		virtual ~Alumno();

		int getNumAsignaturas();
};


#endif /* ALUMNO_H_ */
