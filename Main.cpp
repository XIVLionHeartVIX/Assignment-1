//Osama Shahid DE-39 MTS-B


//Main File
#include "Calculator.h"
#include "Linkedlist.h"
#include "Struct.h"

int main()
{
	// Declaring all variables and pointers
	double *sum, *product, *difference, *remainder;
	complex first, second, third;
	calculator process;
	linkedlist list;

	//Declaring 3 Imaginary Numbers
	first.real = 4; first.imaginary = 5;
	second.real = 3; second.imaginary = -3;
	third.real = 4; third.imaginary = 3;


	//Creating a LinkedList with the 3 complex numbers
	list.insertstart(third.real, third.imaginary);
	list.insertstart(second.real, second.imaginary);
	list.insertstart(first.real, first.imaginary);
	list.traverse();

	//Step 1, Adding first and second and adding to list(assumed at end)
	sum = process.sum(first.real, second.real, first.imaginary, second.imaginary);
	list.insertend(sum[0], sum[1]);
	list.traverse();

	
	//Step 2, Subtracting first and third and store at last
	difference = process.difference(first.real, third.real, first.imaginary, third.imaginary);
	list.insertend(difference[0], difference[1]);
	list.traverse();

	//Step 3, Multiply second and third and store at last
	product = process.product(first.real, second.real, first.imaginary, second.imaginary);
	list.insertend(product[0], product[1]);
	list.traverse();

	//Step 4, Divide first and third, delete 4th element then add at end of list(Assumed)
	remainder = process.remainder(first.real, second.real, first.imaginary, second.imaginary);
	list.deletemid(4);
	list.insertend(remainder[0], remainder[1]);
	list.traverse();


	system("pause");

	return 0;
}







