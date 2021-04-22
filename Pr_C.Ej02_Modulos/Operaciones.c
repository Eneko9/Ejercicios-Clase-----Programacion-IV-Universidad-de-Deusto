/*
 * Operaciones.c
 *
 *  Created on: 18 feb. 2021
 *      Author: eneko
 */
#include "Operaciones.h"

int sumar(int num1, int num2)
{
	return num1 + num2;
}
int multiplicar(int num1, int num2){
	int num = 0;
	int var;
	for (var = 0; var < num1; ++var) {
		num = num + num2;
	}
	return num;
}
int elevar(int num1, int num2){
	int var;
	int num = 1;
	for (var = 0; var < num2; ++var) {
		num = multiplicar(num, num1);
	}
	return num;
}
