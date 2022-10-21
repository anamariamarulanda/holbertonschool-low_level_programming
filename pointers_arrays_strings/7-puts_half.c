/*
 *  * ==================================================================
 *  * PROYECT C - Pointers, arrays and strings
 *  * TASK 7 : Winning is only half of it. Having fun is the other half
 *  * ==================================================================
 *  * AUTHOR : ANA MARIA MARULANDA GALLEGO
 *  * ==================================================================
 */

#include "main.h"

/**
 ** puts_half - prints the second half of a given string
 ** @str: passed string pointer
 **
 ** Return: 0
*/
void puts_half(char *str)
{
	int len = 0;

		while (*(str + len) != '\0')
			len++;
		if (len % 2 == 0)
			len /= 2;
		else
			len = len / 2 + 1;
		while (*(str + len) != '\0')
{
			_putchar(*(str + len));
			len++;
}
			_putchar('\n');
}
