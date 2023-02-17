#include <stdio.h>
/**
* main - Entry point
* pront the user to enter their name
* Return: always a success
*/
int main(void)
{
	double radius, circumference, area;
	double pi = 3.142;

	printf("Enter the radius: ");
	scanf("%lf", &radius);

	area = radius * radius * pi;
	circumference = 2.0 * radius * pi;

	printf("The radius is %lf\n", radius);
	printf("The area is %lf\n", area);
	printf("The circumference is %lf\n", circumference);

	return (0);
}
