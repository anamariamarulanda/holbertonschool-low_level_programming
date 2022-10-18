/*
 *  * ==================================================================
 *  * PROYECT C - Pointers, arrays and strings
 *  *  * TASK 0 : 98 Battery st.
 *  * ==================================================================
 *  * AUTHOR : ANA MARIA MARULANDA GALLEGO
 *  * ==================================================================
*/

#include "main.h"

/**
 ** main - Write a function that swaps the values of two integers.
 ** @a: Pointer to first int
 ** @b: Pointer to second int
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
