#pragma once
class node
{
private:
	int info;
	node *next;
	node *prev;
public:
	node();
	node(int);
	void set_nxt(node*);
	void set_prv(node*);
	node* get_nxt();
	node* get_prv();
	int get_inf();
	~node();
};

