/*
 *===================================================================
 * PROYECT C - Variables, if, else, while
 * TASK 4 : When I was having that alphabet soup, I never thought
 * that it would pay off
 *===================================================================
 * AUTHOR : ANA MARIA MARULANDA GALLEGO
 *===================================================================
 */

#include <stdio.h>

/**
 *  main - Write a program that prints the alphabet in lowercase,
 *  followed by a new line.
 *  Return: Always 0.
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
{
	if (ch != 'q' && ch != 'e')
{
		putchar(ch);
}
		ch++;
}
		putchar('\n');
	return (0);
}
