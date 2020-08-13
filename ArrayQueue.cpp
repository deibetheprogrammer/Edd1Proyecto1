#include "ArrayQueue.hpp"
#include <iostream>

using std::cout;
using std::endl;

ArrayQueue::ArrayQueue()
{
	capacity = 1000;
	array = new Object*[capacity];
	front = final = 0;
}

Object* ArrayQueue::frente(){
	//si no est� vac�a
	//recuperar el valor de frente 
	//retornar el valor
	if(!vacia()) {
		return array[front];
	}
	//else retornar nulo
	return nullptr;
}

void ArrayQueue::poneEnCola(Object* x){
	//validar si no est� llena
	//insertar x en la posici�n final
	if (!(final == (capacity-1) && front == 0) || final == (front-1))
	{
		if(final == (capacity-1)) {
			array[0] == x;
		} else {
			array[final+1] = x;
		}

		//incrementar final (calcular desbordamiento si existe)
		if (final == (capacity-1)) {
			final = 0;
		}
		else {
			final++;
		}
		//incrementar auxiliar
		auxiliar++;
	}
	//else
	//no hacer nada/mostar mensaje
	else {
		cout << "La cola esta llena" << endl;
	}
}

Object* ArrayQueue::quitaDeCola(){
	//si no est� vac�a
	//recuperar el valor de la casilla frente
	//frente ++ 
	//decrementar auxiliar
	//retornar el valor recuperado
	if (!vacia()) {
		Object* temp = array[front];
		array[front] = nullptr;
		front++;
		auxiliar--;
		return temp;
	}
	//else return null
	else {
		return nullptr;
	}
}

void ArrayQueue::anula(){
	//iterar las casillas desde frente hasta final y  borrar los datos (delete)
	//while no est� vac�a
	// temp = quitaDeCola()
	//delete temp
	while (!vacia())
	{
		Object* temp = quitaDeCola();
		delete temp;
	}
	//frente = final = 0
	front,final = 0;
}

bool ArrayQueue::vacia(){
	return front == final;
}

void ArrayQueue::imprimir(){
		//iterar las casillas desde frente hasta final e imprimir en pantalla 
		//cada elemento
		for (size_t i = front; i < (final+1); i++)
		{
			cout << array[i]->toString();
		}
		
}

ArrayQueue::~ArrayQueue()
{
	delete[] array;
}
