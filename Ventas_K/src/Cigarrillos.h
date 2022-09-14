/*
 * Cigarrillos.h
 *
 *  Created on: 12 sep. 2022
 *      Author: Lenovo
 */
#define CANT_CIGARRILLOS 20
#ifndef CIGARRILLOS_H_
#define CIGARRILLOS_H_
typedef struct{

	int IDProducto[4][CANT_CIGARRILLOS];
	int precio[3][CANT_CIGARRILLOS];
	int precioCosto[4][CANT_CIGARRILLOS];
	int ganancia[4][CANT_CIGARRILLOS];
	int stock;


}eCigarrillos;

int subCargaCigarrillos();
int dataForzada();


#endif /* CIGARRILLOS_H_ */
