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

		//Inserta un nuevo elemento
		virtual bool inserta(int,Object*);
		
		//Elimina el elemento en la posicion que se indica
		virtual Object* suprime(int);
		
		//Elimina todos los elementos de la lista
		virtual void anula();
		
		//Recupera el elemento en la posicion indicada
		virtual Object* recupera(int) ;
		
		//Recupera el elemento en la posicion siguiente a la indicada
		virtual Object* siguiente(int);
		
		//Recupera el elemento en la posicion anterior a la indicada
		virtual Object* anterior(int);
		
		//Indica si la lista esta vacía
		virtual bool vacia();
		
		//Imprime todos los elementos de la lista
		virtual void imprime();
		
		//Muestra el primer elemento de la lista
		virtual Object* primero();
		
		//Localiza el objeto que se indica en la lista y devuelve su posicion
		virtual int localiza(Object*);
		
		
	protected:

		//ATRIBUTOS

		//Nodo al comienzo de la fila
		Node* inicio;

		//Numero de elementos actualmente presentes en la lista
		int n; 
};

#endif
