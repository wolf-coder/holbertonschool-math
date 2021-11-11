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
		printf("%.9g", c.re);
		if (c.im)
		{
			if (c.im != 1 && c.im != (-1))
				(c.im > 0) ? (printf(" + %.gi", c.im)) : printf(" - %.gi", (-1) * c.im);
			else
				(c.im > 0) ? (printf(" + i")) : printf(" - i");
		}
	}
	else
	{
		if (c.im)
			printf("%.gi", c.im);
		else
			printf("0");
	}
	printf("\n");
}
