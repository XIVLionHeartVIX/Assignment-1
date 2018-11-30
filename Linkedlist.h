//LinkedList Header File

#include <iostream>
#include <string>
#include "Complex.h"
class linkedlist
{
private:
	complex *head;
public:
	linkedlist();
	void insertstart(complex number);
	void insertend(complex number);
	void traverse();
	void insertmid(complex number, int position);
	void deletemid(int position);
	void singlepos(int position);
	~linkedlist()
	{
		delete head;
	}

};