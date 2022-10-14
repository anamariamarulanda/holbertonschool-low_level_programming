/*
 *===================================================================
 * PROYECT C - Variables, if, else, while
 * TASK 3 : alphABET
 *===================================================================
 * AUTHOR : ANA MARIA MARULANDA GALLEGO
 *===================================================================
 */

#include <stdio.h>

/**
 *  main - Write a program that prints the alphabet in lowercase, and
 *  then in uppercase, followed by a new line..
 *  Return: Always 0.
 */
int main(void)
{
	char ch = 'a', CH = 'A';

	while (ch <= 'z')
{
		putchar(ch);
		ch++;
}
	while (CH <= 'Z')
{
		putchar(CH);
		CH++;
}
		putchar('\n');
	return (0);
}
