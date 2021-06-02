#include <stdio.h>
#include <stdlib.h>
#include "sqlite3.h"
#include <string.h>
#include "estructuras.h"

#define CREATE_TABLE_PRODUCTO "CREATE TABLE IF NOT EXISTS producto (cod_prod INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL, nombre TEXT NOT NULL, stock INTEGER NOT NULL, precio FLOAT NOT NULL, nombre_sec TEXT NOT NULL)"


int visualizarProductosBD(sqlite3 *db) {
	sqlite3_stmt *stmt;

	char sql[] = "SELECT * FROM producto";

	int result = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) ;
	if (result != SQLITE_OK) {
		printf("Error preparing statement (SELECT)\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}

	printf("SQL query prepared (SELECT)\n");

	int id;
	char name[100];
	int stock;
	float precio;

	printf("\n");
	printf("\n");
	printf("Showing products:\n");
	do {
		result = sqlite3_step(stmt) ;
		if (result == SQLITE_ROW) {
			id = sqlite3_column_int(stmt, 0);
			strcpy(name, (char *) sqlite3_column_text(stmt, 1));
			stock = sqlite3_column_int(stmt, 2);
			precio = sqlite3_column_double(stmt, 3);
			printf("ID: %d Name: %s Stock: %i Price: %f\n", id, name, stock, precio);
		}
	} while (result == SQLITE_ROW);

	printf("\n");
	printf("\n");

	result = sqlite3_finalize(stmt);
	if (result != SQLITE_OK) {
		printf("Error finalizing statement (SELECT)\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}

	printf("Prepared statement finalized (SELECT)\n");

	return SQLITE_OK;
}

int eliminarProducto(sqlite3 *db, char* nomProd) {
	sqlite3_stmt *stmt;

	char sql[] = "DELETE FROM producto WHERE nombre= ? ";

	int result = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) ;
	if (result != SQLITE_OK) {
		printf("Error preparing statement (DELETE)\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}

	result = sqlite3_bind_text(stmt, 1, nomProd, strlen(nomProd), SQLITE_STATIC);
	if (result != SQLITE_OK) {
		printf("Error binding parameter 1\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}

	printf("SQL query prepared (DELETE)\n");

	result = sqlite3_step(stmt);
	if (result != SQLITE_DONE) {
		printf("Error deleting data\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}

	result = sqlite3_finalize(stmt);
	if (result != SQLITE_OK) {
		printf("Error finalizing statement (DELETE)\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}

	printf("Prepared statement finalized (DELETE)\n");

	return SQLITE_OK;
}


int insertarProductoNuevo(sqlite3 *db, char* nombre, int stock, float precio, char* nom_seccion) {
	sqlite3_stmt *stmt;

	char sql[] = "insert into producto values (NULL, ?, ?, ?, ?)";
	int result = sqlite3_prepare_v2(db, sql, strlen(sql) + 1, &stmt, NULL) ;
	if (result != SQLITE_OK) {
		printf("Error preparing statement (INSERT)\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}

	printf("SQL query prepared (INSERT)\n");

	result = sqlite3_bind_text(stmt, 1, nombre, strlen(nombre), SQLITE_STATIC);
	if (result != SQLITE_OK) {
		printf("Error binding parameter 1\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}
	result = sqlite3_bind_int(stmt, 2, stock);
	if (result != SQLITE_OK) {
		printf("Error binding parameter 2\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}
	result = sqlite3_bind_double(stmt, 3, precio);
	if (result != SQLITE_OK) {
		printf("Error binding parameter 3\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}
	result = sqlite3_bind_text(stmt, 4, nom_seccion, strlen(nom_seccion), SQLITE_STATIC);
	if (result != SQLITE_OK) {
		printf("Error binding parameter 4\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}

	result = sqlite3_step(stmt);
	if (result != SQLITE_DONE) {
		printf("Error inserting new data into country table\n");
		return result;
	}

	result = sqlite3_finalize(stmt);
	if (result != SQLITE_OK) {
		printf("Error finalizing statement (INSERT)\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}

	printf("Prepared statement finalized (INSERT)\n");

	return SQLITE_OK;
}

int main() {
	sqlite3 *db;


	const char * filename = "SBenenjo.db";
	int result = sqlite3_open(filename, &db);
	if (result != SQLITE_OK) {
		printf("Error opening database\n");
		return result;
	}
	printf("Database opened\n") ;

	if(sqlite3_exec(db, CREATE_TABLE_PRODUCTO, NULL, NULL, NULL) != SQLITE_OK){
		printf("Error al crear tabla\n");
	}

//	if(sqlite3_exec(db, CREATE_TABLE_SECCION, NULL, NULL, NULL) != SQLITE_OK){
//		printf("Error al crear tabla\n");
//	}

	printf("Table created\n");

	result = insertarProductoNuevo(db, "rape", 390, 9.45, "pescados");
	if (result != SQLITE_OK) {
		printf("Error inserting new data\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}
	printf("Producto insertado\n");

	result = visualizarProductosBD(db);
	if (result != SQLITE_OK) {
		printf("Error getting all products\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}

	result = eliminarProducto(db, "salmon");
	if (result != SQLITE_OK) {
		printf("Error deleting data\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}

	result = sqlite3_close(db);
	if (result != SQLITE_OK) {
		printf("Error opening database\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}

	printf("Database closed\n") ;

	return 0;
}
