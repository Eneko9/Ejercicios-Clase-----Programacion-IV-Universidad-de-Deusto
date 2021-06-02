/*
 * Persona.cpp
 *
 *  Created on: 13 may. 2021
 *      Author: eneko
 */

#include "Persona.h"
#include <string.h>
#include <iostream>
using namespace std;

Persona::Persona()
{
	this->nombre = "";
	this->edad = 0;
}
Persona::Persona(char* nom, int edad)
{
	this->nombre = new char[strlen(nombre) + 1];
	strcpy(this->nombre, nom);
	this->edad = edad;
}
Persona::~Persona(){

}

