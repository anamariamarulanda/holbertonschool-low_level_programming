/*
 *===================================================================
 * PROYECT C - Variables, if, else, while
 * TASK 2 : I sometimes suffer from insomnia. And when I can't fall
 * a sleep, I play what I call the alphabet game
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
		putchar(ch);
		ch++;
}
	putchar('\n');
	return (0);
}
