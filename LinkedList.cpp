#include <iostream>
#include <string>
#include "LinkedList.hpp"
#include "Alumno.hpp"

using std::string;
using std::cout;
using std::endl;

//CONSTRUCTORES
LinkedList::LinkedList()
{
	inicio = nullptr;
	n = 0;
}

//MUTADORES
int LinkedList::getN() {
	return n;
}

//METODOS
Object* LinkedList::primero(){
	if (inicio) //si inicio no es nullptr
		return inicio->getData();
	else 
		return nullptr;
}

void LinkedList::imprime(){
	//declarar temp = inicio para iterar
	Node* temp = inicio;
	// for i = 1 to hops
		//print temp.data
		//temp = temp.sig

	cout << "Alumnos en la lista: " << endl;
	for (int i = 1; temp != nullptr; i++)
	{
		cout << '(' << i << ')'<< ((Alumno*)(temp->getData()))->toString() << endl;
		temp = temp->getSiguiente();
	}
	
}

int LinkedList::localiza(Object* x){
	//hops = n-1
	int hops = n-1;
	//declarar temp = inicio para iterar
	Node* temp = inicio;
	// for i = 1 to hops
		//if x == temp.data
			//return i
		//
			//temp = temp.sig
	for (int i = 0; i <= hops; i++)
	{
		if (x->equals(temp->getData()))
		{
			return (i+1);
		}
		else
		{
			temp = temp->getSiguiente();
		}
	}
	
	//return -1 --- el elemento no se encontr� en la lista
	return -1;
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
		//return temp.data 
	//else
		//return nullptr
	if (p >= 1 && p <= n)
	{
		int hops = p - 1;
		Node* temp = inicio;
		for (int i = 1; i <= hops; i++)
		{
			temp = temp->getSiguiente();
		}
		return temp->getData();
	}
	else
	{
		return nullptr;
	}
	
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
	if (p >=1 && p <= n)
	{
		int hops = p - 1;
		Node* temp = inicio;
		for (int i = 1; i <= hops; i++)
		{
			temp = temp->getSiguiente();
		}
		if(p != 1)
			temp->getAnterior()->setSiguiente(temp->getSiguiente());
		else
		{
			inicio = temp->getSiguiente();
		}
		
		if(p != n)
			temp->getSiguiente()->setAnterior(temp->getAnterior());
			
		temp->setAnterior(nullptr);
		temp->setSiguiente(nullptr);

		n--;

		Object* retValue = temp->getData();
		temp->setData(nullptr);
		delete temp;

		return retValue;
		
	}
	cout << "La posicion no es valida, elija una posicion entre " << 1 << "y " << n << endl;
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
		//return false
	
	if (p >=1 && p <= (n+1))
	{
		int hops = p - 1;
		Node* temp = inicio;
		Node* anterior = nullptr;

		for (int i = 1; i <= hops; i++)
		{
			anterior = temp;
			temp = temp->getSiguiente();
		}

		Node* nNode = new Node();
		nNode->setData(x);

		if(temp != nullptr) {
			nNode->setAnterior(temp->getAnterior());
			temp->setAnterior(nNode);
		}
		nNode->setSiguiente(temp);

		if(p == 1)
			inicio = nNode;
		else
		{
			anterior->setSiguiente(nNode);
		}
		
	
		n++;
		return true;
		
	}

	cout << "La posicion no es valida, elija una posicion entre " << 1 << "y " << (n+1) << endl;
	return false;
}

//DESTRUCTOR
LinkedList::~LinkedList()
{
	delete inicio;
}
