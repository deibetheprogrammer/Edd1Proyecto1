#include "ArrayStack.hpp"
#include <iostream>

using std::cout;
using std::endl;

ArrayStack::ArrayStack()
{
	capacity = 1000;
	array = new Object*[capacity];
	tope=0;
}

void ArrayStack::push(Object* x){
	//asignar x a la casilla tope
	array[tope] = x;
	//incrementar tope
	tope++;
}

bool ArrayStack::isEmpty(){
	return tope == 0;
}

Object* ArrayStack::pop(){
	//si no est� vac�a
		//recuperar el valor de la casilla tope -1 
		//asignar null a tope -1
		//tope--
		//retornar el valor recuperado
	if(!isEmpty()) {
		Object* temp = array[tope-1];
		array[tope-1] = nullptr;
		tope--;
		return temp; 
	}
	//else return null
	return nullptr;
}

void ArrayStack::print(){
	//for i = tope -1 hasta 0
		//imprimir el contenido de la casilla i del array
	for (int i = tope-1; i >= 0; i--)
	{
		cout << array[i]->toString() << endl;
	}
	
}

Object* ArrayStack::top() {
	//si no est� vac�a 
		//recuperar el valor de la casilla tope -1 
		//retornar el valor recuperado
	if (!isEmpty()) 
	{
		return array[tope-1];
	}
	//else return null
	return nullptr;
}

void ArrayStack::clear(){
	for(int i = 0 ; i < tope;i++ ) {
		delete array[i];
		array[i] = nullptr;
	}
	tope = 0;
}

ArrayStack::~ArrayStack()
{
	delete[] array;
}
