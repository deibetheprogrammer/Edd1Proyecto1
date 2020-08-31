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

		//Introduce un nuevo elemento a la pila
		virtual void push(Object*);

		//Saca el elemento en el tope de la pila
		virtual Object* pop() ;

		//Muestra el elemento en el tope de la pila, sin sacarlo
		virtual Object* top() ;

		//Verifica si la pila esta vacía
		virtual bool isEmpty();

		//Imprime todos los elementos de la pila
		virtual void print();

		//Elimina todos los elementos de la pila
		virtual void clear();
		
	protected:

		//ATRIBUTOS

		//Nodo en el tope de la lista
		Node* tope;
};

#endif
