#include "holberton.h"
/**
 * complex_from_mod_arg - unction that update the real and
 *the imaginary parts of a complex number given its modulus and arguments.
 * @m: complex number modulus.
 * @arg: complex number argument.
 * @c3: updated Complex number.
 * Return - void.
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = cos(arg) * m;
	c3->im = sin(arg) * m;
}
