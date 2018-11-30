//Osama Shahid DE-39 MTS-B


//Main File
#include "Linkedlist.h"

int main()
{
	// Declaring all variables and pointers
	complex first, second, third;
	complex process;
	complex sum, product, difference, remainder;
	linkedlist list;

	//Declaring 3 Imaginary Numbers
	first.real = 4; first.imaginary = 5;
	second.real = 3; second.imaginary = -3;
	third.real = 4; third.imaginary = 3;


	//Creating a LinkedList with the 3 complex numbers
	list.insertstart(third);
	list.insertstart(second);
	list.insertstart(first);
	list.singlepos(1);
	list.singlepos(2);
	list.singlepos(3);
	cout << endl << endl;

	//Step 1, Adding first and second and adding to list(assumed at end)
	sum = first + second;
	list.insertend(sum);
	list.traverse();

	
	//Step 2, Subtracting first and third and store at last
	difference = first - second;
	list.insertend(difference);
	list.traverse();

	//Step 3, Multiply second and third and store at last
	product = first * second;
	list.insertend(product);
	list.traverse();

	//Step 4, Divide first and third, delete 4th element then add at end of list(Assumed)
	remainder = first / second;
	list.deletemid(4);
	list.insertend(remainder);
	list.traverse();


	system("pause");

	return 0;
}







