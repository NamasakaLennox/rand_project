#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void get_random(void)
{
	int num_people = 0, random, i;
	char *person[30], name[100], *selected;

	printf("Enter the names members, Enter 'done' when finished\n");
	do
	{
		printf("Person %d: ", num_people + 1);
		scanf("%s\n", name);
		if (strcmp(name, "done") != 0)
		{
			person[num_people] = malloc(sizeof(char) * (strlen(name) + 1));
			strcpy(person[num_people], name);
			num_people++;
		}
	} while (strcmp(name, "done") != 0);
	if (num_people == 0)
	{
		printf("No names entered, quitting!\n");
		exit(98);
	}
	srand(time(NULL));
	random = rand() % num_people;
	printf("Our Lucky Winner is: %s\n", person[random]);
	for (i = 0; i < num_people; i++)
		free(person[i]);
}

int main(void)
{
	get_random();

	return (0);
}
