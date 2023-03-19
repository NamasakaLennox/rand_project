#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * get_random - picks a random person
 * Description: asks for input from user
 * generates a random number and picks one of the entered users
 *
 * Return: no value
 */
void get_random(void)
{
	int num_people = 0, random, i, cmp;
	char *person[30], name[50];

	/* get input from user */
	printf("Enter the names members, Enter 'done' when finished\n");
	printf("Person %d: ", num_people + 1);
	scanf("%s", name);
	/* put the names in an array */
	while (1)
	{
		/* allocate a memory block */
		person[num_people] = malloc(sizeof(char) * (strlen(name) + 1));
		strcpy(person[num_people], name);
		if (strcmp(person[num_people], "done") == 0)
			break;
		num_people++;
		printf("Person %d: ", num_people + 1);
		scanf("%s", name);
	}
	/* no names entered, exit */
	if (num_people == 0)
	{
		printf("No names entered, quitting!\n");
		exit(98);
	}
	/* generate a random number between 0 and number of people */
	srand(time(NULL));
	random = rand() % num_people;
	printf("Our Lucky Winner is: %s\n", person[random]);
	/* free the allocated memory */
	for (i = 0; i < num_people; i++)
		free(person[i]);
}
/**
 * main - where execution starts
 *
 * Return: always 0
 */
int main(void)
{
	get_random();

	return (0);
}
