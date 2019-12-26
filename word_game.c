#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j, essay;
	char s1[10];
	char c1[10];
	char a1[2];
	char b1[2];

	printf("          Welcome To My Word Guessing Game !\n");
	printf("Enter the word : ");
	scanf("%s", s1);
	strcpy(c1, s1);
	for (i = 1 ; i < strlen(s1) - 1 ; i++)
	{
		c1[i] = '*';
	}
	printf("Guess the first word : ");
	printf("%s\n",c1);

	i = 1;
	j = 2;
	essay = 5;
	while ((i <= (strlen(s1) - 2)) && (essay > 0))
	{
		printf("Type character %d of the word : ", j + 1);
		scanf("%s", a1);
		b1[0] = s1[i];
		if (strcmp(a1, b1) == 0)
		{
			printf("character is correct!\n");
		}
		else
		{
			essay--;
			printf("character is incorrect, you have %d more essays\n", essay);
			while (strcmp(a1, b1) != 0 && essay > 0)
			{
				printf("Type character %d of the word : ", j + 1
					);
				scanf("%s",a1);
				b1[0] = s1[i];
				if (strcmp(a1, b1) == 0)
				{
					printf("character is correct!\n");
					break;
				}
				else
				{
					essay--;
					/* still don't know what to do with this */
					/* if (essay == 0)
					{
						printf("          You've lost!\n");
						break;
					}
					*/
					if (essay == 0)
						break;
					printf("character is incorrect, you have %d more essays\n", essay);
				}
			}
		}
		i++;
		j++;
	}

	if (essay == 0)
	{
		printf("          You've lost!\n");
		return (0);
	}
	if (i > (strlen(s1) - 2))
		printf("          Congratulations ! You've Won \n");
	else
		printf("          You've lost!\n");

	return (0);
}
