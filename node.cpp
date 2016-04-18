#include "stdafx.h"
#include "node.h"


node::node():info(0),next(NULL),prev(NULL){}
node::node(int inf):info(inf),next(NULL),prev(NULL){}
void node::set_nxt(node * nxt)
{
	next = nxt;
}
void node::set_prv(node * prv)
{
	prev = prv;
}
node * node::get_nxt()
{
	return next;
}
node * node::get_prv()
{
	return prev;
}
int node::get_inf()
{
	return this->info;
}
node::~node()
{
	delete next;
	delete prev;
}
