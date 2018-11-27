//LinkedList Functions File
#include "Linkedlist.h"

linkedlist::linkedlist()
{
	head = NULL;
}

void linkedlist:: insertstart(double val, double val2)
{

	complex *N = new complex;
	N->node = head;
	head = N;
	N->real = val;
	N->imaginary = val2;


}
void linkedlist:: insertend(double val, double val2)
{
	complex *N = new complex;
	complex *NN = new complex;
	N = head;
	while (N->node != NULL)
	{
		N = N->node;
	}
	N->node = NN;
	NN->real = val;
	NN->imaginary = val2;
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
	cout << current->real << "+" << current->imaginary << "j";
}

void linkedlist:: insertmid(double val, double val2, int position)
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
	inserted->real = val;
	inserted->imaginary = val2;

}

void linkedlist:: traverse()
{
	complex *temp = head;
	while (temp != NULL)
	{
		cout << temp->real << "+" << temp->imaginary << "j" << endl;
		temp = temp->node;
	}
	cout << endl;
}
