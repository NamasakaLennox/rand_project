#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str)
{
	int count = 0;

	while (*str)
		count++;
	return (count);
}
char *_input(void)
{
	int i = 0, len, spc = 0, j = 0, a = 0;
	char names[1024], *str;

	printf("Please enter names separated by a space!\n");
	scanf("%s\n", names);
	while (names[i] != '\0')
	{
		if (names[i] == ' ')
			spc++;
		i++;
	}
	len = i;
	str = malloc(sizeof(char) * (len + 1));
	for (i = 0; i <= spc; i++)
	{
		for (; j < len; j++)
		{
			if (names[j] == ' ')
				str[i + j] = '\0';
			else
				str[i + j] = names[j];
		}
	}
	str[len] = '\0';
	return (&str[2]);
}

int main(void)
{
	int random, size = 0;
	int i;
	char *str;

	// printf("Enter number of people:\n");
	// scanf("%d\n", &num_people);
	str = _input();
	if (str == NULL)
	{
		printf("FAILED\n");
		return (1);
	}
	printf("Our Lucky Winner is: %s\n", str);
	return (0);
}
