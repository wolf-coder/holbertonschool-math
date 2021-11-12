#include "holberton.h"
/**
 *modulus - Function that returns the modulus of a given complex number.
 *@c: complex number
 *Return - module of the given complex number.
 **/
double modulus(complex c)
{
	return (sqrt(pow(c.im, 2) + pow(c.re, 2)));
}
