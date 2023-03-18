#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[])
{
	char *str;
	int random;

	srand(time(0));

	random = (rand() % (argc - 1)) + 1;

	str = argv[random];
	printf("Our Lucky Person Today Is: %s\n", str);
	return (0);
}
