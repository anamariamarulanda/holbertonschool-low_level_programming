/*
 *  * ==================================================================
 *  * PROYECT C - Pointers, arrays and strings
 *  * TASK 4 :  I can only go one way. I've not got a reverse gear
 *  * ==================================================================
 *  * AUTHOR : ANA MARIA MARULANDA GALLEGO
 *  * ==================================================================
 */

#include "main.h"

/**
 ** print_rev - prints a string in stdout in reverse
 ** @s: Pointer to string to reverse
 **
 ** Return: 0
*/

void print_rev(char *s)
{
	int i = 0;
	int c = 0;

		while (s[i] != '\0')
{
			c++;
}
		for (i = (c - 1); i >= 0; i--)
{
			_putchar(s[i]);
}
			_putchar('\n');
}
