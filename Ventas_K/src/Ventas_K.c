/*
 ============================================================================
 Name        : Ventas_K.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 *
 * Function : Create an algorithm for managing a market.
 *
 * Requested data :	iDProducto.
 * 					Sale price.
 *  				Purchase Price.
 *  				Stock.
 *
 *
 *
 * */


#include <stdio.h>
#include <stdlib.h>
#include "Cigarrillos.h"
#include "Validaciones.h"
#define SUCCESS 0
#define ERROR -1
int main(void) {
	setbuf(stdout, NULL);


	eCigarrillos ListaCigarillos[CANT_CIGARRILLOS];
	char resp;



	do{

		printf("[ 1 ] Ingresar Cigarrillo - > \n");
		printf("[ 2 ] Ingresar Gaseosa - > \n");
		printf("[ 3 ] Ingresar Cerveza - > \n");
		printf("[ 4 ] Calcular - > \n");
		printf("[ 5 ] Informar  - > \n");
		printf("[ 6 ] SALIR --  \n" );

		printf("Elija una opcion -->");
		fflush(stdin);
		scanf("%c",&resp);
		switch(resp){

		case '1' :

			subCargaCigarrillos();

			break;

		case '2' :

				printf("Entre bien 2 \n");

			break;

		case '3' :

				printf("Entre bien 3 \n");

			break;

		case '4' :

				printf("Entre bien 4 \n ");

			break;

		case '5' :

				printf("Entre bien 5 \n ");

			break;

		case '6' :

				printf("Saliendo .... ");

			break;
		}
	}while(resp != '6');

	return EXIT_SUCCESS;
}
