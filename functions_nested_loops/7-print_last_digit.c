/*
 *  * *==================================================================
 *  * * PROYECT C - Functions, nested loops
 *  * * TASK 7 : There are only 3 colors, 10 digits, and 7 notes; it's
 *  * * what we do with them that's important
 *  * *===================================================================
 *  * * AUTHOR : ANA MARIA MARULANDA GALLEGO
 *  * *===================================================================
 */

#include "main.h"

/**
 ** print_last_digit - Prints the last digit of a number
 ** @n: The number to be treated
 **
 ** Return: Value of the last digit of number
 */

int print_last_digit(int n)

{
	int last;

		last = n % 10;

	if (last < 0)
{
		last = last * -1;
}
		_putchar(last + '0');

	return (last);
}
