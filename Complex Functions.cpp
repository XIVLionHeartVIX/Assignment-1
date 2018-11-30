//Calculator Functions File
#include "Complex.h"

complex complex::operator-(complex num2)
{
	complex result;
	result.real = real - num2.real;
	result.imaginary = imaginary - num2.imaginary;

	return result;
}

	complex complex::operator*(complex num2)
{
		complex result;
		result.real = ((real*num2.real) - (imaginary*num2.imaginary));
		result.imaginary = ((real*num2.imaginary) + (imaginary*num2.real));
		return result;
}

	complex complex::operator/(complex num2)
	{
		complex result;
		result.real = ((real*num2.real)+(imaginary*num2.imaginary)) / ((num2.real*num2.real) + (num2.imaginary*num2.imaginary));
		result.imaginary = ((imaginary*num2.real) - (real*num2.imaginary)) / ((num2.real*num2.real) + (num2.imaginary*num2.imaginary));
		return result;

	}

	complex complex::operator+ (complex num2)
	{
		complex result;
		result.real = this->real + num2.real;
		result.imaginary = imaginary + num2.imaginary;
		return result;
	}
