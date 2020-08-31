#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include "TDAQueue.hpp"

class ArrayQueue : public TDAQueue
{
	public:
		//CONSTRUCTOR
		ArrayQueue();

		//DESTRUCTOR
		~ArrayQueue();
		
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

		//Se trata del arreglo de objetos utilizado por la cola
		Object** array;

		//Se trata de la capacidad de memoria del hardware
		int capacity;

		//La posicion en el arreglo del frente de la cola
		int front;

		//La posicion en el arreglo del final de la cola
		int final;

		//Tamaño de la cola
		int auxiliar;
};

#endif
