#include "LinkedList.hpp"

LinkedList::LinkedList()
{
	inicio = nullptr;
	n = 0;
}

Object* LinkedList::primero(){
	if (inicio) //si inicio no es nullptr
		return inicio->getData();
	else 
		return nullptr;
}

void LinkedList::imprime(){
	//hops = n - 1 
	//declarar temp = inicio para iterar
	// for i = 1 to hops
		//print temp.data
		//temp = temp.sig	
}

int LinkedList::localiza(Object* x){
	//hops = n - 1 
	//declarar temp = inicio para iterar
	// for i = 1 to hops
		//if x == temp.data
			//return i
		//
			//temp = temp.sig
			
	//return -1 --- el elemento no se encontr� en la lista
	return 0;
}

//si  libera en c++ el contenido de la memoria de los elementos de la lista
void LinkedList::anula(){
	if(inicio){
		delete inicio;
		n=0;
		inicio = nullptr;
	}
}

bool LinkedList::vacia(){
	return n == 0; //inicio == nullptr;
}

Object* LinkedList::recupera(int p){
	//validar el rango de p
	//si p es v�lido
		//hops = p - 1 
		//declarar temp = inicio para iterar
		// for i = 1 to hops
			//temp = temp.sig
		//return temp.data temp->getData()
	//else
		return nullptr;
}


Object* LinkedList::siguiente(int p) {
		return recupera(p+1);	
	}
	
Object* LinkedList::anterior(int p){
	return recupera(p-1);
}


Object* LinkedList::suprime(int p){
	//validar el rango de p
	//si p es v�lido
		//hops = p - 1 
		//declarar temp = inicio para iterar
		// for i = 1 to hops
			//temp = temp.sig
		//temp.ant.sig = temp.sig  temp->getAnterior()->setSiguiente(temp->getSiguiente());
		//temp.sig.ant = temp.ant
		//temp.ant = nullptr temp->setAnterior(nullptr)
		//temp.sig = nullptr
		//n--	
		//retValue = temp.data
		//temp.data = nullptr
		//delete temp
		//retornar retValue
	//else
		//retorna nullptr
	return nullptr;
}

bool LinkedList::inserta(int p,Object* x){
	//validar el rango de p
	//si p es v�lido
		//hops = p - 1 
		//declarar temp = inicio para iterar
		// for i = 1 to hops
			//temp = temp.sig
		//instanciar nNode que contenga a x
		//nNode.ant = temp.ant
		//temp->getAnterior()->setSiguiente(nNode) temp.ant.sig = nNode
		//nNode.sig = temp
		//temp.ant = nNode
		//n++
		//return true
	//else
		return false;
	
}





LinkedList::~LinkedList()
{
	delete inicio;
}
