/*
 * Persona.h
 *
 *  Created on: 13 may. 2021
 *      Author: eneko
 */

#ifndef PERSONA_H_
#define PERSONA_H_

class Persona{
	protected:
		int edad;
		char* nombre;
	public:
		Persona();
		Persona(char* nom, int edad);
		~Persona();

		int getEdad();
		char *getNombre();

};


#endif /* PERSONA_H_ */
