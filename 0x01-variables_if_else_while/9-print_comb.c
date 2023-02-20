#include <stdio.h>
/**
* main - entry point
* Return: Always a success
*/
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
			if (number == 9)
				continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);

}
