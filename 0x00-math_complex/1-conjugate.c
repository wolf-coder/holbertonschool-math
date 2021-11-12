#include "holberton.h"
/**
 * conjugate - function that returns the conjugate of a given complex number.
 * @c: The given complex number.
 * Return - complex type number
 **/
complex conjugate(complex c)
{
	c.im *= (-1);
	return (c);
}
