#include "holberton.h"
/**
 * display_complex_number - Function to display the passed complex number.
 * @c: The passed complex number.
 * Return: Void.
*/


void display_complex_number(complex c)
{
	if (c.re)
	{
		printf("%.0f", c.re);
		if (c.im)
			printf(" + %.0fi", c.im);
	}
	else
	{
		if (c.im)
			printf("%.0fi", c.im);
		else
			printf("0");
	}
	printf("\n");
}
