#include "holberton.h"
/**
 * argument - function that returns the argument of a given complex number.
 *@c: The given complex number.
 * Return - arg (c)
 **/
double argument(complex c)
{
	return (atan(c.im / c.re));
}
