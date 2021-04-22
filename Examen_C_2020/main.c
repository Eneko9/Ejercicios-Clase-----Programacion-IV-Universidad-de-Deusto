#include <stdio.h>
#include <string.h>
#include "producto.h"
#include "carrito.h"

int main(void)
{
	Producto p1; p1.ref=1; strcpy(p1.nombre,"Platanos"); p1.precio=12.0;
	Producto p2; p2.ref=2; strcpy(p2.nombre,"Solomillo"); p2.precio=32.2;
	Producto p3; p3.ref=3; strcpy(p3.nombre,"Chocolate"); p3.precio=25.5;
	Producto p4; p4.ref=4; strcpy(p4.nombre,"Rodaballo"); p4.precio=35.4;
	Producto p5; p5.ref=5; strcpy(p5.nombre,"Cereales"); p5.precio=10.5;

	//imprimirProducto(p1);

	Producto* comprados[] = {&p1, &p2, &p3, &p4, &p5};

	//PARTE 1
	Compra c = {p1,3};
	printf("Antes de modificar la compra:\n");
	imprimirCompra(c);
	modificarCompra(&c, 5);
	printf("Despues de modificar la compra:\n");
	imprimirCompra(c);

	//PARTE 2

	Carrito carrito;
	imprimirProducto(*comprados[1]);
	int cants[5] = {1,3,5,7,9};
	//funcion crear ticket no funciona.
	//crearCarrito(&carrito, comprados,cants, 5);
	imprimirProducto(carrito.compras[0].p);
	imprimirTicket(&carrito);


	return 0;
}
