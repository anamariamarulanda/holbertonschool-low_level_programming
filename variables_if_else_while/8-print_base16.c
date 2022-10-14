/*
 *===================================================================
 * PROYECT C - Variables, if, else, while
 * TASK 8 : Hexadecimal
 *===================================================================
 * AUTHOR : ANA MARIA MARULANDA GALLEGO
 *===================================================================
 */

#include <stdio.h>

/**
 *  main - Write a program that prints all the numbers of base 16
 *  in lowercase, followed by a new line.
 *  Return: Always 0.
 */
int main(void)
{
	int num;
	char let;

	for (num = 0; num < 10 ; num++)
{
		putchar((num % 10) + '0');
}
	for (let = 'a'; let <= 'f'; let++)
{
		putchar(let);
}
		putchar('\n');
	return (0);
}
