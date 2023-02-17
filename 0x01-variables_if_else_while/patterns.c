#include <stdio.h>
/**
* main - Entry point
* A program to print patterns
* Return: Always a success
*/
int main(void)
{
	int n = 5;
	int i, j;

	for (i = 1; i <= n; i++)
		for (j = n; j >= 1; j--)
		{
			if (i >= j)
				printf("*");
			else
				printf(" ");
		}
	printf("\n");

	return (0);
}
