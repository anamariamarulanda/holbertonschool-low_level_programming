/*
 *  * ==================================================================
 *  * PROYECT C - Pointers, arrays and strings
 *  *  * TASK 1 : Don't swap horses in crossing a stream
 *  * ==================================================================
 *  * AUTHOR : ANA MARIA MARULANDA GALLEGO
 *  * ==================================================================
*/

#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to first int
 * @b: Pointer to second int
*/

void swap_int(int *a, int *b)
{
	int c;
	int d;

		c = *a;
		d = *b;
		*a = d;
		*b = c;
}
