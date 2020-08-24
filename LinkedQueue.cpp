#include "LinkedQueue.hpp"

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
    return nullptr;
}

void LinkedQueue::poneEnCola(Object*) {
	//crear newNode que contenga x 
	//if(vacia)
	//inicio = final = newNode
	//else
	//final.sig  = newNode
	//newNode.ant = final
	//final = NewNode
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
    
    return nullptr;

}

bool LinkedQueue::vacia() {
	return final == nullptr;
}

void LinkedQueue::anula(){
    //validar si no esta vacio
    //while( !vacia() ){
    //  temp = inicio;
    //  inicio = inicio.siguiente();
    //  inicio.anterior() = nullptr;
    //	temp.siguiente = nullptr;
    //  delete temp;
    //}
    //inicio = final = nullptr;
    //
}

void LinkedQueue::imprime() {
	//Crear nodo* temporal y asignarle el inicio
    //validar que inicio sea diferente de nullptr
         //si es diferente de null entonces
            //while temporal sea diferente de null
                  //cout<<temporal.data
                 //temporal= temporal.sig
         // retornar mensaje de que la cola esta vacia.
}

LinkedQueue::~LinkedQueue()
{
	delete inicio;
}
