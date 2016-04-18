#pragma once
#include "node.h"
class worker
{
protected:
	node* head;
	node* tail;
public:
	worker();
	void push(int);
	void push_back(int);
	void print(bool);
	~worker();
};

