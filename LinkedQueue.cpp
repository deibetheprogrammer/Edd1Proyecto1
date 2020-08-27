#include "LinkedQueue.hpp"
#include <iostream>

using std::cout;
using std::endl;

LinkedQueue::LinkedQueue()
{
	inicio=final=nullptr;
}
 
Object* LinkedQueue::frente(){
 	//  if (vacia()){
 	//  return nullptr;
 	//
 	//  }else{
 	//  return inicio.data;
	//  }
    if(!vacia())
        return inicio->getData();
    return nullptr;
}

void LinkedQueue::poneEnCola(Object* x) {
	//crear newNode que contenga x 
	//if(vacia)
	//inicio = final = newNode
	//else
	//final.sig  = newNode
	//newNode.ant = final
	//final = NewNode

    Node* nNode = new Node();
    nNode->setData(x);
    if (vacia())
    {
        inicio = final = nNode;
    }
    else
    {
        final->setSiguiente(nNode);
        nNode->setAnterior(final);
        nNode->setSiguiente(nullptr);
        final = nNode;
    }
    
    
}

Object* LinkedQueue::quitaDeCola() {
	//if !vacia
        //temp = frente apuntar el valor del frente de la cola 
        //retValue = temp->getData almacenar el valor del nodo 
        //if temp.sig  validando que no sea el último nodo
            //temp.sig.ant = nullptr 
            //frente = temp.sig
        //temp.siguiente =nullptr
        //temp.data =nullptr 
        //Validando en caso que la cola quede vacía
            //metodo clear 
        //else 
            //borra temp 
        //retorna el retValue 
    //else
        //return nullptr
    if (!vacia())
    {
        Node* temp = inicio;
        Object* retValue = inicio->getData();
        inicio = inicio->getSiguiente();
        
        temp->setSiguiente(nullptr);
        temp->setData(nullptr);
        if(vacia())
            final = nullptr;
        else
            delete temp;
        return retValue;
    }
    
    return nullptr;

}

bool LinkedQueue::vacia() {
	return inicio == nullptr;
}

void LinkedQueue::anula(){
    if (inicio)
    {
        delete inicio;
        inicio = final = nullptr;
    }
    
}

void LinkedQueue::imprime() {
	//Crear nodo* temporal y asignarle el inicio
    //validar que inicio sea diferente de nullptr
         //si es diferente de null entonces
            //while temporal sea diferente de null
                  //cout<<temporal.data
                 //temporal= temporal.sig
         // retornar mensaje de que la cola esta vacia.
    if (inicio != nullptr)
    {
        Node* temp = inicio;
        while (temp != nullptr)
        {
            cout << temp->getData()->toString() << endl;
            temp = temp->getSiguiente();
        } 
    }
    else
    {
        cout << "La cola esta vacia";
    }
}

LinkedQueue::~LinkedQueue()
{
	delete inicio;
}
