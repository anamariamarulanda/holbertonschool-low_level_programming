/*
 *  * ==================================================================
 *  * PROYECT C - Pointers, arrays and strings
 *  * TASK 2 : This report, by its very length, defends itself
 *  * against the risk of being read
 *  * ==================================================================
 *  * AUTHOR : ANA MARIA MARULANDA GALLEGO
 *  * ==================================================================
 */

#include "main.h"

/**
 ** _strncpy - function to copy string
 **
 ** @dest: string to copy to
 ** @src: string to copy from
 ** @n: number of chars to copy
 ** Return: char pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

		for (i = 0; i < n; i++)
{
		if (src[i] == '\0')
{
		for (j = i; j < n && dest[j] != '\0'; j++)
			dest[j] = '\0';
		break;
}
			dest[i] = src[i];
}
		return (dest);
}
