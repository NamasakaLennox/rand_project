#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program start
 * @argc: argument count
 * @argv: string of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *str;
	int random;

	/* seed random number generator with current time */
	srand(time(0));

	/* generate random number from 1 to number of args */
	random = (rand() % (argc - 1)) + 1;

	/* pick a random person */
	str = argv[random];
	printf("Our Lucky Person Today Is: %s\n", str);
	return (0);
}
