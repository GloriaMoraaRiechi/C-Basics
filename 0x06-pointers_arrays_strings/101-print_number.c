#include "main.h"

/**
 * base10 - power in 10 base
 * @n: an exponent
 * Return: returns 10 to power exponent
 */
int base10(int n)
{
	int base = 10;

	while (n > 0)
	{
		base *= 10;
		n--;
	}
	return (base);
}

/**
 * print_number - prints integers enters as parameters using putchar
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{

	unsigned int num = n;

	if (n < 0)
	{
	_putchar('-');
	num = -num;
	}

	if ((num / 10) > 0)
	print_number(num / 10);
	_putchar((num % 10) + '0');

}
