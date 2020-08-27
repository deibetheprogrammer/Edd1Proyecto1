#ifndef LNKEDSTACK_H
#define LNKEDSTACK_H

#include "TDAStack.hpp"

#include "Node.hpp"
#include "Object.hpp"

class LinkedStack : public TDAStack
{
	public:
		//CONSTRUCTORES
		LinkedStack();

		//DESTRUCTOR
		~LinkedStack();

		//METODOS
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
