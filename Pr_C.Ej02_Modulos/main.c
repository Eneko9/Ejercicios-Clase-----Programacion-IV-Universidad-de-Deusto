/*
 * main.c
 *
 *  Created on: 18 feb. 2021
 *      Author: eneko
 */

#include <stdio.h>
#include "Operaciones.h"

int main(void)
{
	int num1 = 5;
	int num2 = 6;
    printf("Suma entre %i y %i = %i", num1,num2,sumar(num1,num2));
    printf("\nMultiplicacion entre %i y %i = %i", num1,num2, multiplicar(num1,num2));
    printf("\nPotencia entre %i y %i = %i", num1,num2, elevar(num1,num2));

    return 0;

}
