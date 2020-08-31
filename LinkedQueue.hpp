#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

#include "TDAQueue.hpp"

#include "Node.hpp"

#include "Object.hpp"

class LinkedQueue : public TDAQueue
{
	public:

		//CONSTRUCTOR
		LinkedQueue();

		//DESTRUCTOR
		~LinkedQueue();
		
		//METODOS 

		//Devuelve el elemento al frente de la cola
		virtual Object* frente();

		//Pone un nuevo elemento en la cola
		virtual void poneEnCola(Object*);

		//Quita un elemento de la cola
		virtual Object* quitaDeCola();

		//Verifica si la cola esta vacía
		virtual bool vacia();

		//Elimina todos los elementos de la cola
		virtual void anula();

		//Imprime todos los elementos de la cola
		virtual void imprime();
		
		
	protected:

		//ATRIBUTOS

		//Es el nodo al comienzo de la cola
		Node* inicio;

		//Es el nodo al final de la cola
		Node* final;
};

#endif
