#include "LinkedStack.hpp"

LnkedStack::LnkedStack()
{
	tope = nullptr;
}

LnkedStack::~LnkedStack()
{
	delete tope;
}


void LnkedStack::print(){
	//temp = top
	//while temp != null
		//print temp.data
		//temp = temp.sig
}

void LnkedStack::clear(){
	//si no est� vac�a
		delete tope;
		tope = nullptr;
}


bool LnkedStack::isEmpty(){
	return tope == nullptr;
}

Object* LnkedStack::top(){
	//si est� vac�a 
		//return null
	//else
		//return top.data
	return nullptr;
}

Object* LnkedStack::pop(){
	//si est� vac�a
		//return null
	//else
		//nodo* temp = top
		//top = top.sig
		//top.ant = null
		//temp.sig = null
		//retValue = temp.data
		//temp.data = nullptr
		//delete temp
		//return reValue
	return nullptr;
} 

void LnkedStack::push(Object* x){
	//crear newNode que contenga x 
	//newNode.sig = top
	//top.ant = newNode
	//top = newNode	
}
