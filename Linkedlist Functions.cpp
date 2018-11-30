//LinkedList Functions File
#include "Linkedlist.h"

linkedlist::linkedlist()
{
	head = NULL;
}

void linkedlist:: insertstart(complex number)
{

	complex *N = new complex;
	N->node = head;
	head = N;
	N->real = number.real;
	N->imaginary = number.imaginary;


}
void linkedlist:: insertend(complex number)
{
	complex *N = new complex;
	complex *NN = new complex;
	N = head;
	while (N->node != NULL)
	{
		N = N->node;
	}
	N->node = NN;
	NN->real = number.real;
	NN->imaginary = number.imaginary;
	NN->node = NULL;

}

void linkedlist::deletemid(int position)
{
	complex *current = new complex;
	complex *previous = new complex;
	current = head;
	previous = head;

	for (int i = 1; i < position; i++)
	{
		previous = current;
		current = current->node;
	}
	previous->node = current->node;
	delete current;
}

void linkedlist:: singlepos(int position)
{
	complex *current = new complex;
	current = head;

	for (int i = 1; i < position; i++)
	{
		current = current->node;
	}
	cout << "[ " << current->real << "+" << current->imaginary << "j ], ";
}

void linkedlist:: insertmid(complex number, int position)
{
	complex *temp = new complex;
	temp->node = head;
	complex *temp2 = new complex;
	complex *inserted = new complex;
	for (int i = 1; i <= position; i++)
	{
		temp = temp->node;
	}
	temp2 = temp->node;
	inserted->node = temp2;
	temp->node = inserted;
	inserted->real = number.real;
	inserted->imaginary = number.imaginary;

}

void linkedlist:: traverse()
{
	complex *temp = head;
	while (temp != NULL)
	{
		cout << "[ " << temp->real << "+" << temp->imaginary << "j ], ";
		temp = temp->node;
	}
	cout << endl <<endl;
}
