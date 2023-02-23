#include "main.h"
/**
* print_numbers - prints the numbers form 0 to 9 followed by a new line
*/
void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
		_putchar((num % 10) + '0');

	_putchar('\n');

}
