#include "stdafx.h"
#include "worker.h"
#include <iostream>

using namespace std;

worker::worker(){
	tail = NULL;
	head = NULL;
}
void worker::push(int inf)
{
	node *tmp = new node(inf);
	tmp->set_nxt(head);
	tmp->set_prv(NULL);
	head = tmp;
}

void worker::push_back(int inf)
{
	node *tmp = new node(inf);
	if (head == NULL && tail == NULL)
	{
		head = tmp;
		tail = tmp;
		tmp->set_nxt(NULL);
		tmp->set_prv(NULL);
	}
	else 
		if (head == tail)
	{
		tail = tmp;
		head->set_nxt(tmp);
		tmp->set_prv(head);
		tmp->set_nxt(NULL);
	}
		else
		{
			tail->set_nxt(tmp);
			tmp->set_prv(tail);
			tmp->set_nxt(NULL);
			tail = tmp;
		}
}

void worker::print( bool var)
{
	node * tmp = new node;
	if (var)
	{
		tmp = head;
		while (tmp)
		{
			cout << tmp->get_inf() << " ";
			tmp = tmp->get_nxt();
		}
	}
	else
	{
		tmp = tail;
		while (tmp)
		{
			cout << tmp->get_inf() << " ";
			tmp = tmp->get_prv();
		}
	}
	cout << "\n";
}


worker::~worker()
{
	delete head;
	delete tail;
}
