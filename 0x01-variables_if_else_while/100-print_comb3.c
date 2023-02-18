#include <stdio.h>
/**
* main - Entry point
*  prints all possible different combinations of two digits
*  Return: Always a success
*/
int main(void)
{
	int dig1, dig2;

	for (dig2 = dig1 + 1; dig2 < 10; dig2++)
	{
		putchar((dig1 % 10) + '0');
		putchar((dig2 % 10) + '0');

		if (dig1 == 8 && dig2 == 9)
			continue;

		putchar(',');
		putchar(' ');

	}

	putchar('\n');

	return (0);

}
