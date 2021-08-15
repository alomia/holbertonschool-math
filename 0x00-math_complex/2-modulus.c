#include "holberton.h"
#include <stdio.h>
#include <math.h>
/**
 * modulus - returns the modulus of a given complex number
 * @c: variable
 *
 * Return: result
 */
double modulus(complex c)
{

double result;
double sqr = 2.0;

result = sqrt(pow(c.re, sqr) + pow(c.im, sqr));
return (result);

}