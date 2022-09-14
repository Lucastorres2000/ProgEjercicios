/*
 * Cigarillos.c
 *
 *  Created on: 12 sep. 2022
 *      Author: Lenovo
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Cigarrillos.h"
#include "Validaciones.h"

int subCargaCigarrillos(){
	char resp;
	int retorno=0;

	do{
		printf(" \t \t ! ----  MENU CARGA DE CIGARILLOS ----!  \n");
		printf(" \n [ 1 ] Cargar IDProducto ");
		printf(" \n [ 2 ] Cargar Precio Costo");
		printf(" \n [ 3 ] Cargar Precio Venta");
		printf(" \n [ 4 ] Cargar Stock Total ");
		printf(" \n [ 5 ] Cargar Venta Dia  ");
		printf("\n Elija una Opcion  ->  ");
		fflush(stdin);
		scanf("%c",&resp);

	switch(resp){

	case '1' :

					printf("Entre bien 1  \n");

				break;

	case '2' :

					printf("Entre bien 2  \n");

				break;

	case '3' :

					printf("Entre bien 3  \n");

				break;

	case '4' :

					printf(" Entre bien 4 \n");

				break;

	case '5' :

					printf(" Entre bien 5 \n");

				break;
	case '6' :

					printf(" Volviendo al menu Principal ..... \n");

				break;



	}


	}while (resp != '4');

	return retorno;
}
int dataForzada(){

	int retorno=0;
	int IDProducto[4][CANT_CIGARRILLOS];
	int precio[3][CANT_CIGARRILLOS];
	int precioCosto[4][CANT_CIGARRILLOS];
	int ganancia[4][CANT_CIGARRILLOS];
	int stock;


	return retorno;
}
