#include "LinkedStack.hpp"
#include <iostream>

using std::cout;
using std::endl;

LinkedStack::LinkedStack()
{
	tope = nullptr;
}

LinkedStack::~LinkedStack()
{
	delete tope;
}


void LinkedStack::print(){
	//temp = top
	Node* temp = tope;
	//while temp != null
		//print temp.data
		//temp = temp.sig
	while (temp != nullptr)
	{
		cout << temp->getData()->toString() << endl;
		temp = temp->getSiguiente();
	}
	
}

void LinkedStack::clear(){
	//si no est� vac�a
		delete tope;
		tope = nullptr;
}


bool LinkedStack::isEmpty(){
	return tope == nullptr;
}

Object* LinkedStack::top(){
	//si est� vac�a 
		//return null
	//else
		//return top.data
	if (isEmpty())
	{
		return nullptr;
	}
	return tope->getData();
}

Object* LinkedStack::pop(){
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
	if (isEmpty())
	{
		return nullptr;
	}
	else
	{
		Node* temp = tope;
		tope = tope->getSiguiente();
		tope->setAnterior(nullptr);
		temp->setSiguiente(nullptr);
		Object* retValue = temp->getData();
		temp->setData(nullptr);
		delete temp;

		return retValue;
	}
	
} 

void LinkedStack::push(Object* x){
	//crear newNode que contenga x 
	//newNode.sig = top
	//top.ant = newNode
	//top = newNode
	Node* nNode = new Node();
	nNode->setData(x);
	nNode->setSiguiente(tope);
	tope->setAnterior(nNode);
	tope = nNode;
}
