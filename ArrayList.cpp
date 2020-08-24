#include "ArrayList.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

ArrayList::ArrayList()
{
	capacity = 1000;
	n=0;
	array = new Object*[capacity];
}

bool ArrayList::inserta(int p,Object* x){

	//primero validar p en el rango (1 hasta n+1)
    if(p < 1 || p > (n+1)) {
        cout << "Posicion invalida, por favor ingrese una posicion"
             << "entre 1 y " << (n+1) << endl;
        return false;
    }
	//si el rango es valido 
	//determinar los corrimientos necesarios y realizarlos
    for (size_t i = (n-1); i >= p-1; i--)
    {
        array[i+1] = array[i];
    }
	//insertar el valor en casilla correspondiente del arreglo
    array[p-1] = x;
	//incrementar n	
    n++;
	//return true
    return true;
	//else
	     //return false
}

Object* ArrayList::suprime(int p){
	//validar p en el rango (1 hasta n)
	if(p < 1 || p > n) {
        cout << "Posicion invalida, por favor ingrese una posicion"
             << "entre 1 y " << (n) << endl;
        return nullptr;
    }

	Object* temp = array[p-1];
	//determinar los corrimientos necesarios y realizarlos
	for (size_t i = (p-1); i < (n-1); i++)
    {
        array[i] = array[i+1];
    }
	array[n-1] = nullptr; 
	//decrementar n
	n--;
	//retornar lo que estaba en la casilla p
	return temp;
	//else
	//return null
}

Object* ArrayList::recupera(int p){
	//validar p en el rango ( 1 hasta n )
	if(p < 1 || p > n) {
        cout << "Posicion invalida, por favor ingrese una posicion"
             << "entre 1 y " << n << endl;
        return nullptr;
    }
	//retornar el valor del objeto que corresponde a p en el array
	return array[p-1];
	//else
		// return null		
}

Object* ArrayList::siguiente(int p){
	if((p+1) < 1 || (p+1) > (n-1)) {
        cout << "Posicion invalida, por favor ingrese una posicion"
             << "entre 1 y " << (n-1) << endl;
        return nullptr;
    }
	return recupera((p+1));
}

Object* ArrayList::anterior(int p){
	if((p-1) < 1 || (p-1) > n) {
        cout << "Posicion invalida, por favor ingrese una posicion"
             << "entre 1 y " << (n-1) << endl;
        return nullptr;
    }
	return recupera((p-1));
}

int ArrayList::localiza(Object* x){
	//en un ciclo de i=1 a n
	//si la casilla del arreglo es igual (equals) a x entonces
	//return i
	for (size_t i = 0; i < n; i++)
	{
		if (x->equals(array[i]))
		{
			return (i+1);
		}
		
	}
	//si sale del ciclo y no retorna
	//return -1;
	return -1;
}


void ArrayList::imprime(){
	//en un ciclo desde 1 hasta n
	//imprime en pantalla el contenido de las n casillas del arreglo
	int pos = 1;
	for (size_t i = 0; i < n; i++)
	{
		cout << '(' << pos << "): " << array[i]->toString() << endl;
		pos++;
	}
	
}

bool ArrayList::vacia(){
	return n == 0;
}

Object* ArrayList::primero(){
	if(!vacia())
		return array[0];
	else
		return nullptr;
}

void ArrayList::anula(){
	for(int i = 0 ; i < n;i++ ) {
		delete array[i];
		array[i] = nullptr;
	}
	n = 0;
}



ArrayList::~ArrayList()
{	
	delete[] array;
	array = nullptr;
}



