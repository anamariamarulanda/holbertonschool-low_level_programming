/*
 *  * ==================================================================
 *  * PROYECT C - Pointers, arrays and strings
 *  * TASK 3 : "Strcmp"
 *  * against the risk of being read
 *  * ==================================================================
 *  * AUTHOR : ANA MARIA MARULANDA GALLEGO
 *  * ==================================================================
 */

#include "main.h"

/**
 ** _strcmp - function to copy string
 **
 ** @s1: first string to compare
 ** @s2: second string to compare
 ** Return: outputs the difference of s1 and s2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;

	return (*(s1 + i) - *(s2 + i));
}