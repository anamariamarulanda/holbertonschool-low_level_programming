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
	int i, c, k;
	char *a, aux;

		a = s;

	while (s[c] != '\0')
{
		c++;
}

	for (k = 1; k < c; k++)
{
		a++;
}

	for (i = 0; i < (c / 2); i++)
{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
}
}
