#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str)
{
	int count = 0;

	while (*str)
		count++;
	return (count);
}
char *_input(int num)
{
	int i = 0;
	char *names, *ans;

	printf("Please enter names! Press ENTER after each name!\n");
	printf("Enter '\\' when done and press ENTER\n");
	while(i < num)
	{
		scanf("%s\n", &names[i]);
		i++;
	}
	return (&names[1]);
}

int main(void)
{
	int num_people, random, size = 0;
	int i;
	char *str;

	scanf("Enter number of people: %d\n", &num_people);
	str = _input(num_people);
	if (str == NULL)
	{
		printf("FAILED\n");
		return (1);
	}
	printf("Our Lucky Winner is: %s:\n", str);
	return (0);
}
