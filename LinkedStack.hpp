#ifndef LNKEDSTACK_H
#define LNKEDSTACK_H

#include "TDAStack.hpp"

#include "Node.hpp"
#include "Object.hpp"

class LnkedStack : public TDAStack
{
	public:
		LnkedStack();
		~LnkedStack();
		virtual void push(Object*);
		virtual Object* pop() ;
		virtual Object* top() ;
		virtual bool isEmpty();
		virtual void print();
		virtual void clear();
		
	protected:
		Node* tope;
};

#endif
