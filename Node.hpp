#ifndef NODE_H
#define NODE_H

#include "Object.hpp"

class Node
{
	public:

		//CONSTRUCTOR
		Node();
		
		//MUTADORES

		//Modifica el apuntador al nodo siguiente
		void setSiguiente(Node*);

		//Devuelve el apuntador al nodo siguiente
		Node* getSiguiente();

		//Modifica el apuntador al nodo anterior
		void setAnterior(Node*);

		//Devuelve el apuntador al nodo anterior
		Node* getAnterior();

		//Modifica el apuntador al objeto contenido dentro del nodo
		void setData(Object*);

		//Devuleve el apuntador al objeto que contiene el nodo
		Object* getData();		
		
		//DESTRUCTOR
		~Node();

	protected:

		//ATRIBUTOS

		//Es un apuntador al nodo siguiente
		Node* siguiente;

		//Es un apuntador al nodo anterior
		Node* anterior;

		//Es el apuntador al objeto dentro del nodo
		Object* data;
};

#endif
