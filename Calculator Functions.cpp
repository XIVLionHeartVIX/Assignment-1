//Calculator Functions File
#include "Calculator.h"

double* calculator:: sum(double data1, double data2, double data3, double data4)
{
	static double array[2];
	array[0] = data1 + data2;
	array[1] = data3 + data4;

	return array;
}
double* calculator:: difference(double data1, double data2, double data3, double data4)
{
	static double array[2];
	array[0] = data1 - data2;
	array[1] = data3 - data4;

	return array;
}

double* calculator:: product(double data1, double data2, double data3, double data4)
{
	static double array[2];
	array[0] = data1 * data2;
	array[1] = data3 * data4;

	return array;
}

double* calculator:: remainder(double data1, double data2, double data3, double data4)
{
	static double array[2];
	array[0] = data1 / data2;
	array[1] = data3 / data4;

	return array;
}

