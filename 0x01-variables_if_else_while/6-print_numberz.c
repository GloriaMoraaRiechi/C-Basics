#include <stdio.h>
/**
* main - prints all single digit number of base 10 using putchar
* Return: always a success
*/
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	putchar('\n');

	return (0);

}
