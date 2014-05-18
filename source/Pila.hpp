#ifndef __PILA_HPP__
#define __PILA_HPP__

#include <iostream>

#include "Nodo.hpp"

class Pila{
	private:
// El elemento básico de la pila son los nodos,
// que se irán apilando o eliminando de la pila.
		Nodo *ultimo;
	public:
// El constructor Pila incializa la pila en NULL.
		Pila();
// La función push() inserta un elemento del tipo char,
// creando un nodo y apilandolo sobre la misma.
		void push(char);
// La función pop() elimina el último elemento insertado en la pila, 
// siempre y cuando la pila no se encuentre vacía.
		void pop();
// Consulta el último caracter insertado en la pila.
		char top();
// Consulata si la está vacía, devolviendo true si lo está y false si no está vacia.
		bool esVacia();
};

#endif