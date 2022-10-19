/*
 * * ==================================================================
 * * PROYECT C - Pointers, arrays and strings
 * * TASK 2 : This report, by its very length, defends itself
 * * against the risk of being read
 * * ==================================================================
 * * AUTHOR : ANA MARIA MARULANDA GALLEGO
 * * ==================================================================
 */

#include "main.h"

/**
 * _strlen - Calculates the length of a given string
 * @s: string to find length of
 * Return: 0
 */

int _strlen(char *s)

{
	int i = 0;

		while (*(s + i))
			i++;
		return (i);
}

