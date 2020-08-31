#ifndef TDASTACK_H
#define TDASTACK_H

#include "Object.hpp"

class TDAStack
{
	public:

		//METODOS

		//Introduce un nuevo elemento a la pila
		virtual void push(Object*)=0;

		//Saca el elemento en el tope de la pila
		virtual Object* pop() =0;

		//Muestra el elemento en el tope de la pila, sin sacarlo
		virtual Object* top() =0;

		//Verifica si la pila esta vacía
		virtual bool isEmpty()=0;

		//Imprime todos los elementos de la pila
		virtual void print()=0;

		//Elimina todos los elementos de la pila
		virtual void clear()=0;
		
	protected:
};

#endif
