#ifndef HOLBERTON_H
#define HOLBERTON_H

typedef struct comp
{
    double re;
    double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);

#endif
