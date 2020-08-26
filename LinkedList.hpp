#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "TDAList.hpp"

#include "Node.hpp"

class LinkedList : public TDAList
{
	public:

		//CONSTRUCTORES
		LinkedList();

		//DESTRUCTOR
		~LinkedList();

		//MUTADORES
		int getN();
		
		//METODOS
		virtual bool inserta(int,Object*);
		
		virtual Object* suprime(int);
		
		virtual void anula();
		
		virtual Object* recupera(int) ;
		
		virtual Object* siguiente(int);
		
		virtual Object* anterior(int);
		
		virtual bool vacia();
		
		virtual void imprime();
		
		virtual Object* primero();
		
		virtual int localiza(Object*);
		
		
	protected:
		Node* inicio;
		int n; 
};

#endif
