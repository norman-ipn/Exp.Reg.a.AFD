#ifndef __ARBOL_HPP__
#define __ARBOL_HPP__

#include <stdio.h>

#include "Dato.hpp"

class Arbol{
	private:
// Cada árbol contendrá un campo para guardar el dato y 
// 2 apuntadores a un arbol hijo izquierdo y uno derecho.
		Dato d;
		Arbol *hojaIzquierda;
		Arbol *hojaDerecha;
	public:
// Inicializa los arboles hijos en NULL
		Arbol();
// Inserta cada caracter de la expresión regular en el árbol sintáctico.
		bool insertar(Arbol**,char);
// Recorre el árbol sintáctico con un recorrido "inorden". 
// (hojaIzquierda, raíz, hojaDerecha)
		void inorden(Arbol *);
		void inorden(Arbol *,FILE*);
// Coloca el caractér dentro del nodo raíz.
		void setDato(char);
// Consulta el dato (caractér) del nodo raíz.
		char getDato(void);
};

#endif
