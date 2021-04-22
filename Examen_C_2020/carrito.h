/*
 * carrito.h
 *
 *  Created on: 15 abr. 2021
 *      Author: eneko
 */
#include "producto.h"
#ifndef CARRITO_H_
#define CARRITO_H_

typedef struct{
	Producto p;
	int unidades;
}Compra;

typedef struct{
	Compra* compras;
	int numCompras;
	float importeTotal;
}Carrito;

void modificarCompra(Compra* c, int cantidadNueva);
void imprimirCompra(Compra c);
void crearCarrito(Carrito* c, Producto* prods[], int* cants, int tamanyo);
void imprimirTicket(Carrito* c);
void devolverCarrito(Carrito* c);
void modificarCarrito(Carrito* c, int ref, int cant);

float importeCarrito(Carrito* c);


#endif /* CARRITO_H_ */
