/*
 * Familia.cpp
 *
 *  Created on: 20 may. 2021
 *      Author: eneko
 */

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Familia.h"
#include "Miembro.h"

using namespace std;

Familia::Familia(Miembro *conyugeH, Miembro *conyugeM){
	this->conyugeH = conyugeH;
	this->conyugeM = conyugeM;
}
Familia::~Familia(){
	delete conyugeH;
	delete conyugeM;
}
Familia::Familia(Familia &f){
	this->conyugeH = f.conyugeH;
	this->conyugeM = f.conyugeM;
}
Miembro * Familia::getConyugeHombre(){
	return this->conyugeH;
}
Miembro * Familia::getConyugeMujer(){
	return this->conyugeM;
}
void Familia::setConyugeHombre(Miembro * conyugeH){
	this->conyugeH = conyugeH;
}
void Familia::setConyugeMujer(Miembro * conyugeM){
	this->conyugeM = conyugeM;
}
char* Familia::getNombre(){
 // concatenar apellidos de los dos conyuges
}



