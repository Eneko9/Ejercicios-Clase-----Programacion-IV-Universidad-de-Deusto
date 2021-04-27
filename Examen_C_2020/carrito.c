/*
 * carrito.c
 *
 *  Created on: 15 abr. 2021
 *      Author: eneko
 */
#include <stdio.h>
#include <stdlib.h>
#include "carrito.h"

void modificarCompra(Compra *c, int cantidadNueva) {
	c->unidades = cantidadNueva;
}

void imprimirCompra(Compra c) {
	printf("Ref.%i  %s  %.2f x %i kg/ud\n", c.p.ref, c.p.nombre, c.p.precio,
			c.unidades);
}
void crearCarrito(Carrito *c, Producto *prods[], int *cants, int tamanyo) {
	c->compras = malloc(sizeof(Compra)* tamanyo);
	c->numCompras = tamanyo;
	for (int i = 0; i < tamanyo; ++i) {
		c->compras->p = *(prods[i]);
		c->compras->unidades = cants[i];
	}
}
void imprimirTicket(Carrito *c) {
	printf("\nTICKET");
	printf("\n......\n");
	for (int i = 0; i < c->numCompras; ++i) {
		imprimirCompra(c->compras[i]);
	}
	printf(".................................\n");
	printf("TOTAL: %f euros\n", importeCarrito(c));

}
void devolverCarrito(Carrito *c) {
	for (int i = 0; i < c->numCompras; ++i) {
		free(c->compras[i].p.nombre);
	}
	free(c->compras);
}
void modificarCarrito(Carrito *c, int ref, int cant) {
	for (int i = 0; i < c->numCompras; ++i) {
		if (c->compras[i].p.ref == ref) {
			c->compras[i].unidades = cant;
		}
	}
}

float importeCarrito(Carrito *c) {
	float importe = 0;
	for (int i = 0; i < c->numCompras; ++i) {
		importe = importe + (c->compras[i].p.precio * c->compras[i].unidades);
	}
	return importe;
}
