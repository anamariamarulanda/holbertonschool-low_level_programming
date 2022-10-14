/*
 *===================================================================
 * PROYECT C - Variables, if, else, while
 * TASK 9 :  Patience, persistence and perspiration make an
 * unbeatable combination for success
 *===================================================================
 * AUTHOR : ANA MARIA MARULANDA GALLEGO
 *===================================================================
 */

#include <stdio.h>

/**
 *  main - Write a program that prints all possible combinations of
 *  single-digit numbers.
 *  Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
{
		putchar((num % 10) + '0');
	if (num != 9)
{
		putchar(',');
		putchar(' ');
}
}
	putchar('\n');
	return (0);
}
