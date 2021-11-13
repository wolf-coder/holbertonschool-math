#include "holberton.h"
/**
 * multiplication - function that performs the multiplication operation to
 * complex numbers.
 * @c1: The given complex number.
 * @c2: The given complex number.
 * @c3: Pointer the resulted Complex number .
 * Return: Void.
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) - (c1.im * c2.im);
	c3->im = (c1.re * c2.im) + (c1.im * c2.re);
}
