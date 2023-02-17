#include <stdio.h>
/**
* main - Entry point
* prompts user to enter two numbers t print their sum
* Return: always a success
*/
int main(void)
{
	int m, n, sum;

	printf("Enter the first integer: ");
	scanf("%d", &m);
	printf("Enter the second integer: ");
	scanf("%d", &n);

	sum = m + n;

	printf("The sum of %d and %d is %d\n", m, n, sum);

	return (0);
}
