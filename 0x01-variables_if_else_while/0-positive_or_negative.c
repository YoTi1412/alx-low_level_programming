#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - task hada aykhdm rbo se7a 
 * Return: 0
**/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d", n);

	if (n > 0)
	{
		puts(" is positive");
	}
	else if (n == 0)
	{
		puts(" is zero");
	}
	else
	{
		puts(" is negative");
	}

	return (0);
}

