#include "holberton.h"
/**
 * conjugate -  returns the conjugate of a given complex number
 * @c: variable
 *
 * Return: c
 */
complex conjugate(complex c)
{

c.im = c.im * (-1);
return (c);

}