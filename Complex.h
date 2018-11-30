//Calculator Header File

#include <iostream>
#include <string>

using namespace std;

class complex
{

public:
	double real = 0;
	double imaginary = 0;
	complex *node;
	complex()
	{
	};
	complex operator-(complex num2);
	complex operator*(complex num2);
	complex operator/(complex num2);
	complex operator+ (complex num1);
	~complex()
	{
	}

};

