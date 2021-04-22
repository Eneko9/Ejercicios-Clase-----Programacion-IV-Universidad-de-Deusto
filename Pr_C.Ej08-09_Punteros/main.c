/*
 * main.c
 *
 *  Created on: 1 mar. 2021
 *      Author: eneko
 */
#include <stdio.h>
#include <math.h>

typedef struct{
	float real;
	float imaginario;
}Complex;

void imprimeComplejo(Complex c){
	printf("Numero complejo = ( %f, %f) \n",c.real,c.imaginario);
}
Complex sumaComplejos(Complex c1, Complex c2){
	Complex complejo;
	complejo.real = c1.real + c2.real;
	complejo.imaginario = c1.imaginario + c2.imaginario;
	printf("Suma de los complejos (%f,%f) + (%f,%f) = (%f , %f) \n",c1.real,c1.imaginario,c2.real,c2.imaginario,complejo.real,complejo.imaginario);
	return complejo;
}
void moduloComplejo(Complex c){
	float modulo = sqrt(c.real*c.real + c.imaginario*c.imaginario);
	printf("El modulo de (%f,%f) es %f \n", c.real,c.imaginario, modulo);
}
void restarComplejos(Complex *c1, Complex c2){
	c1 -> real -= c2.real;
	c1 -> imaginario -= c2.imaginario;
}
void printSize(Complex a){
	printf("Tamaño del complejo: %i bytes \n", sizeof(a));
}
int main(void){

	Complex complejo1 = {3,6};
	Complex complejo2 = {7,2};
	//ej04-06
	imprimeComplejo(complejo1);
	imprimeComplejo(complejo2);
	sumaComplejos(complejo1, complejo2);
	moduloComplejo(complejo2);
	printSize(complejo1);
	//ej08-09
	restarComplejos(&complejo1, complejo2);
	imprimeComplejo(complejo1);
}

