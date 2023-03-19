#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void get_random(void)
{
	int num_people = 0, random, i, cmp;
	char *person[30], name[50];

	printf("Enter the names members, Enter 'done' when finished\n");
	printf("Person %d: ", num_people + 1);
	scanf("%s", name);
	while (1)
	{
		person[num_people] = malloc(sizeof(char) * (strlen(name) + 1));
		strcpy(person[num_people], name);
		if (strcmp(person[num_people], "done") == 0)
			break;
		num_people++;
		printf("Person %d: ", num_people + 1);
		scanf("%s", name);
	}
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
