/*
 *  *===================================================================
 *  * PROYECT C - Functions, nested loops
 *  * TASK 2 : 10 x alphabet
 *  *===================================================================
 *  * AUTHOR : ANA MARIA MARULANDA GALLEGO
 *  *===================================================================
 */

#include "main.h"

/**
 *  *  print_alphabet_x10 - Make alphabeth x10 times
 *  *  Return: Always 0.
*/

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
{
	for (c = 'a'; c <= 'z'; c++)

	{
		_putchar(c);
	}
		_putchar('\n');
		i++;
	}
}
