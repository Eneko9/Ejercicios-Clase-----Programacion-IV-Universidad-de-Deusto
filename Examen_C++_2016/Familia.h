/*
 * Familia.h
 *
 *  Created on: 20 may. 2021
 *      Author: eneko
 */

#ifndef FAMILIA_H_
#define FAMILIA_H_

#include "Miembro.h"

class Familia
{
protected:
	Miembro * conyugeH;
	Miembro * conyugeM;

public:
	Familia(Miembro *conyugeH, Miembro *conyugeM);
	~Familia();
	Familia(Familia &f);

	Miembro * getConyugeHombre();
	Miembro * getConyugeMujer();
	void setConyugeHombre(Miembro * conyugeH );
	void setConyugeMujer(Miembro * conyugeM );
	char* getNombre();
	void imprimir();
};


#endif /* FAMILIA_H_ */
