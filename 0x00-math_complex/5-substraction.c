#include "holberton.h"
/**
 * substraction - function that performs the substraction operation
 * to complex numbers.
 * @c1: complex number.
 * @c2: complex number.
 * @c3: pointer to complex number resulted from substraction operation.
 * return -
**/
void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
