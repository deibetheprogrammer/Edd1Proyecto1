#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include "TDAList.hpp"

class ArrayList : public TDAList
{
	public:
		ArrayList();
		~ArrayList();
		
		virtual bool inserta(int,Object*);
		
		virtual Object* suprime(int);
		
		virtual void anula();
		
		virtual Object* recupera(int);
		
		virtual Object* siguiente(int);
		
		virtual Object* anterior(int);
		
		virtual bool vacia();
		
		virtual void imprime();
		
		virtual Object* primero();
		
		virtual int localiza(Object*);
		
		
		
	protected:
		Object** array;
		int capacity;
		int n;
};

#endif
