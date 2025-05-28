/*
 * main.c
 *
 *  Created on: May 28, 2025
 *      Author: dyfrigerio
 */

/*
 * Escribir un programa que dado un número ingresado por el usuario, cree un arreglo
 * que guarde exactamente esa cantidad de elementos enteros utilizando malloc o
 * calloc, reciba del usuario esa cantidad de números en el arreglo creado, y luego los
 * imprima.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char c = getchar();
	c -= '0';
	getchar();
	int *arr_m = (int *)malloc(c*sizeof(int));
	int *arr_c = (int *)calloc(c, sizeof(int));

	printf("%p %p %p", arr_m, arr_m + c, arr_c);
	free(arr_m);
	free(arr_c);

	return 0;
}
