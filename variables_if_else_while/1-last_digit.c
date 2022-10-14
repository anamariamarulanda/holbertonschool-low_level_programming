/*
 * ===================================================================
 * PROYECT C - Variables, if, else, while
 * TASK 1 : The last digit
 *===================================================================
 * AUTHOR : ANA MARIA MARULANDA GALLEGO
 *===================================================================
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - This program will assign a random number to the variable n
 *  each time it is executed. Complete the source code in order to
 *  print the last digit of the number stored in the variable n..
 *  Return: Always 0.
 */
int main(void)

{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
}
	else if (m == 0)
{
		printf("Last digit of %d is %d and is 0\n", n, m);
}
	else
{
	if (m < 6 && m != 0)
{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
}
}
	return (0);
}
