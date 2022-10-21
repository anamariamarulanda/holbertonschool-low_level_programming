/*
 *  * ==================================================================
 *  * PROYECT C - Pointers, arrays and strings
 *  * TASK 8 : Write a function that prints n elements of an array of
 *  * integers, followed by a new line.
 *  * ==================================================================
 *  * AUTHOR : ANA MARIA MARULANDA GALLEGO
 *  * ==================================================================
 */

#include <stdio.h>
#include "main.h"

/**
 ** print_array - prints first n elements of array
 ** @a: int array to display from
 ** @n: number of elements to display
 **
 ** Return: 0
*/

void print_array(int *a, int n)
{
	int i = 0;
		while (i < n)
{
		if (i == n - 1)
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
		i++;
}
			printf("\n");
}
