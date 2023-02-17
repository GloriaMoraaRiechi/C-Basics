#include <stdio.h>
/**
*main - Entry point
*Prints the alphabets in lowercase
*Return: Always a success
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);

}
