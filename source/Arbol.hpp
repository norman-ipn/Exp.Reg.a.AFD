#ifndef __ARBOL_HPP__
#define __ARBOL_HPP__

#include <stdio.h>

#include "Dato.hpp"

static int countInordenPosicion=1;

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
		void inordenPosiciones(Arbol *);
// Recorre el árbol sintáctico con un recorrido "postorden". 
// (hojaIzquierda, hojaDerecha, raíz)
		void postordenAnulables(Arbol *);
		void postordenPrimeros(Arbol *);
		void postordenUltimos(Arbol *);
// Coloca el caractér dentro del nodo raíz.
		void setDato(char);
// Consulta el dato (caractér) del nodo raíz.
		char getDato(void);
// Coloca la posición de los símbolos que están en la expresión regular.
		void setPosicion(int);
// Consulta la posición del nodo.
		int getPosicion();
// Anota si un nodo es anulable o no.
		void setAnulable(bool);
// Consulta si un nodo es anulable o no.
		bool getAnulable();
// Coloca los nodos siguiente.
		void setPrimeros(int);
		void setPrimeros(int*);
		void setPrimeros(int*,int*);
// Consulta los nodos siguientes.
		int* getPrimeros();
// Coloca los nodos últimos.
		void setUltimos(int);
		void setUltimos(int*);
		void setUltimos(int*,int*);
// Consulta los nodos últimos.
		int* getUltimos();
};

#endif
