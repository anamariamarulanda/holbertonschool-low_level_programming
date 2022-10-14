/*
 *===================================================================
 * PROYECT C - Variables, if, else, while
 * TASK 5 : Numbers
 *===================================================================
 * AUTHOR : ANA MARIA MARULANDA GALLEGO
 *===================================================================
 */

#include <stdio.h>

/**
 *  main - Write a program that prints all single digit numbers of
 *  base 10 starting from 0, followed by a new line.
 *  Return: Always 0.
 */
int main(void)
{
	int n;

	while (n < 10)
{
		printf("%d", n);
		n++;
}
		printf("\n");
	return (0);
}
