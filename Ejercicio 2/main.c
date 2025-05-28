/*
 * main.c
 *
 *  Created on: May 28, 2025
 *      Author: dyfrigerio
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float pseudoRand(float n, float m);

int main(void)
{
	printf("%f", pseudoRand(0.0, 1000.0));
	return 0;
}

float pseudoRand(float n, float m)
{
	srand(time(NULL));
	float resp = rand();
	while(resp < n || resp > m)
	{
		if(resp < n)
		{
			resp *= 2;
		}
		if(resp > m)
		{
			resp /= 2;
		}
	}
	return resp;
}
