/*
 *  * ==================================================================
 *  * PROYECT C - Pointers, arrays and strings
 *  * TASK 5 :  A good engineer thinks in reverse and asks himself about
 *  * the stylistic consequences of the components and systems he
 *  * proposes
 *  * ==================================================================
 *  * AUTHOR : ANA MARIA MARULANDA GALLEGO
 *  * ==================================================================
*/

#include "main.h"

/**
 ** rev_string - reverses a string
 ** @s: string to reverse
 ** Return: 0
*/

void rev_string(char *s)

{
	int len = 0, i, length;
	char c;

		while (*(s + len) != '\0')
{
			len++;
}
			length = len;
			len--;

			for (i = 0; i < length / 2; i++)
{
				c = *(s + i);
				*(s + i) = *(s + len);
				*(s + len) = c;
				len--;
}
}
