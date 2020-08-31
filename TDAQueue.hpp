#ifndef TDAQUEUE_H
#define TDAQUEUE_H

#include "Object.hpp"

class TDAQueue
{
	public:

		//METODOS

		//Devuelve el elemento al frente de la cola
		virtual Object* frente()=0;

		//Pone un nuevo elemento en la cola
		virtual void poneEnCola(Object*)=0;

		//Quita un elemento de la cola
		virtual Object* quitaDeCola()=0;

		//Verifica si la cola esta vacía
		virtual bool vacia()=0;

		//Elimina todos los elementos de la cola
		virtual void anula()=0;

		//Imprime todos los elementos de la cola
		virtual void imprime()=0;	
		
	protected:
};

#endif
