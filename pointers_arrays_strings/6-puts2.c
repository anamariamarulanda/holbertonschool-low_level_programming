/*
 *  * ==================================================================
 *  * PROYECT C - Pointers, arrays and strings
 *  * TASK 6 : Write a function that prints every other character of a
 *  * string, starting with the first character, followed by a new line.
 *  * ==================================================================
 *  * AUTHOR : ANA MARIA MARULANDA GALLEGO
 *  * ==================================================================
 */
#include "main.h"

/**
 ** puts2 - prints every other character of a given string
 ** @str: passed string pointer
 **
 ** Return: 0
*/

void puts2(char *str)
{
	int i = 0;

		while (*(str + i))
{
			_putchar(*(str + i));
			i = i + 2;
}
			_putchar('\n');
}
