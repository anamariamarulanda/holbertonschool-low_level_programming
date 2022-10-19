/*
 *  * ==================================================================
 *  * PROYECT C - Pointers, arrays and strings
 *  * TASK 3 : I do not fear computers. I fear the lack of them
 *  * ==================================================================
 *  * AUTHOR : ANA MARIA MARULANDA GALLEGO
 *  * ==================================================================
 */

#include "main.h"

/**
 ** _puts - prints a string in stdout
 ** @str: string to print
 **
 ** Return: 0
 */

void _puts(char *str)
{
	int i;

		for (i = 0; str[i] != '\0'; i++)
					{
			_putchar(str[i]);
									}
			_putchar('\n');
}
