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
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);


#endif
