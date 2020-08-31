#ifndef TDALIST_H
#define TDALIST_H

#include "Object.hpp"

class TDAList
{
	public:

		//METODOS

		//Inserta un nuevo elemento
		virtual bool inserta(int,Object*)=0;
		
		//Elimina el elemento en la posicion que se indica
		virtual Object* suprime(int)=0;
		
		//Elimina todos los elementos de la lista
		virtual void anula()=0;
		
		//Recupera el elemento en la posicion indicada
		virtual Object* recupera(int) =0;
		
		//Recupera el elemento en la posicion siguiente a la indicada
		virtual Object* siguiente(int)=0;
		
		//Recupera el elemento en la posicion anterior a la indicada
		virtual Object* anterior(int)=0;
		
		//Indica si la lista esta vacía
		virtual bool vacia()=0;
		
		//Imprime todos los elementos de la lista
		virtual void imprime()=0;
		
		//Muestra el primer elemento de la lista
		virtual Object* primero()=0;
		
		//Localiza el objeto que se indica en la lista y devuelve su posicion
		virtual int localiza(Object*)=0;
		
		
		
	protected:
};

#endif
