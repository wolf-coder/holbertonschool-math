#ifndef Func_h
#define Func_h

#include <stdio.h>
#include <math.h>

/**
 * struct complex - Structure to represent a complex number.
 * @re: Real part of the complex number.
 * @im: Imaginary part of the complex number.
*/
struct complex
{
	double re;
	double im;
};
typedef struct complex complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);

#endif
