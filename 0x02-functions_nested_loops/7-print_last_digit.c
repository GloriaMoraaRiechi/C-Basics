#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @n: The number whose last digit is to be printed
* @m last digit
* m *= -1 change the last digit to positive if it was negative
* Return: The value of the last digit
*/
int print_last_digit(int n)
{
	int m;

	if (n < 0)
		n = -n;

	m = n % 10;

	if (m < 0)
		m = -m;

	_putchar(m + '0');

	return (m);
}
