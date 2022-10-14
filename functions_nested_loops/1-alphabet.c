/*
 * ==================================================================
 * PROYECT C - Functions, nested loops
 * TASK 1 :  I sometimes suffer from insomnia. And when I can't fall
 * asleep, I play what I call the alphabet game
 * ==================================================================
 * AUTHOR : ANA MARIA MARULANDA GALLEGO
 * ==================================================================
 */

#include "main.h"

/**
 *  *  print_alphabet - Write a program that prints the alphabet
 *  *  in lowercase,followed by a new line.
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
{
		_putchar(c);
		c++;
}
		_putchar('\n');
}
