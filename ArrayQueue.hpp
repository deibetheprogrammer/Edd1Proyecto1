#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include "TDAQueue.hpp"

class ArrayQueue : public TDAQueue
{
	public:
		ArrayQueue();
		~ArrayQueue();
		
		
		virtual Object* frente();
		virtual void poneEnCola(Object*);
		virtual Object* quitaDeCola();
		virtual bool vacia();
		virtual void anula();
		virtual void imprimir();
		
		
	protected:
		Object** array;
		int capacity;
		int front;
		int final;
		int auxiliar;
};

#endif
