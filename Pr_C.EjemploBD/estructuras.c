/*
 * estructuras.c
 *
 *  Created on: 29 may. 2021
 *      Author: jonga
 */

#include "estructuras.h"
#include <stdio.h>

void imprimirProducto (Producto p){
	printf("(Nombre: %s | Stock: %i | Precio: %f | Seccion: %s)", p.nombre, p.stock, p.precio, p.sec.nombre);
}
