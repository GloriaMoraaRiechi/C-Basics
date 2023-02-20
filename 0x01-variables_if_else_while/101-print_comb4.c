#include <stdio.h>
/**
* main - Entry point
*  prints all possible different combinations of two digits
*  Return: Always a success
*/
int main(void)
{
	int dig1, dig2, dig3;

	for (dig1 = 0; dig1 < 9; dig1++)
	{

		for (dig2 = dig1 + 1; dig2 < 10; dig2++)
		{
			for (dig3 = dig2 + 1; dig3 < 10; dig3++)
			{
				putchar((dig1 % 10) + '0');
				putchar((dig2 % 10) + '0');
				putchar((dig3 % 10) + '0');
			}
		}
	}
	
	putchar('\n');

	return (0);

}
