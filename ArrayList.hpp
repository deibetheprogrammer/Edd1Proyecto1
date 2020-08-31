#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include "TDAList.hpp"

class ArrayList : public TDAList
{
	public:
		//CONSTRUCTORES
		ArrayList();

		//DESTRUCTOR
		~ArrayList();
		
		//METODOS

		//Inserta un nuevo elemento
		virtual bool inserta(int,Object*);
		
		//Elimina el elemento en la posicion que se indica
		virtual Object* suprime(int);
		
		//Elimina todos los elementos de la lista
		virtual void anula();
		
		//Recupera el elemento en la posicion indicada
		virtual Object* recupera(int);
		
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
		
		//MUTADORES

		//Devuelve n
		int getN();
		
		
	protected:

		//ATRIBUTOS

		//Se trata del arreglo de objetos utilizado por la lista
		Object** array;

		//Se trata de la capacidad de memoria del hardware
		int capacity;

		//Numero de elementos actualmente presentes en la lista
		int n;
};

#endif
