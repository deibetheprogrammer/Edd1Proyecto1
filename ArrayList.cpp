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

	//primero validar p en el rango (1 hasta n +1)
    // - Se asume que p ya viene validado
	//si el rango es valido 

		//determinar los corrimientos necesarios y realizarlos
		//insertar el valor en casilla correspondiente del arreglo
		//incrementar n	
		//return true
	//else
	     //return false
}

Object* ArrayList::suprime(int p){
	//validar p en el rango ( 1 hasta n )
		//determinar los corrimientos necesarios y realizarlos
		//decrementar n
		//retornar lo que estaba en la casilla p
	//else
		//return null
}

Object* ArrayList::recupera(int p){
	//validar p en el rango ( 1 hasta n )
		//retornar el valor del objeto que corresponde a p en el array
	//else
		// return null		
}

Object* ArrayList::siguiente(int p){
	return recupera(p+1);
}

Object* ArrayList::anterior(int p){
	return recupera(p-1);
}

int ArrayList::localiza(Object* x){
	//en un ciclo de i=1 a n
		//si la casilla del arreglo es igual (equals) a x entonces
		//return i
		
	//si sale del ciclo y no retornÛ
		//return -1;
}


void ArrayList::imprime(){
	//en un ciclo desde 1 hasta n
	//imprime en pantalla el contenido de las n casillas del arreglo
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
	for(int i = 0 ; i < n;i++ )
		delete array[i];
	
	n = 0;
}



ArrayList::~ArrayList()
{
	for(int i = 0 ; i < n;i++ )
		delete array[i];
		
	delete[] array;
}



