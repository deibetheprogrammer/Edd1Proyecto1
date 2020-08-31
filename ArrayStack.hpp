#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include "TDAStack.hpp"

class ArrayStack : public TDAStack
{
	public:
		//CONSTRUCTOR
		ArrayStack();

		//DESTRUCTOR
		~ArrayStack();
		
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

		//Se trata del arreglo de objetos utilizado por la cola
		Object** array;

		//Se trata de la capacidad de memoria del hardware
		int capacity;

		//Es la posicion en el arreglo del tope de la fila
		int tope;
		
};

#endif
