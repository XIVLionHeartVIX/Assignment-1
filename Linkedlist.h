//LinkedList Header File

#include "Struct.h"

class linkedlist
{
private:
	complex *head;
public:
	linkedlist();
	void insertstart(double val, double val2);
	void insertend(double val, double val2);
	void traverse();
	void insertmid(double val, double val2, int position);
	void deletemid(int position);
	void singlepos(int position);
	~linkedlist()
	{
		delete head;
	}
};