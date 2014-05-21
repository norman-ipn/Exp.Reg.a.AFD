#ifndef __CONVERTIDOR_HPP__
#define __CONVERTIDOR_HPP__

#include <stdio.h>
#include <stdlib.h>

#include "Expresion.hpp"
#include "Arbol.hpp"
#include "Automata.hpp"
#include "Pila.hpp"


class Convertidor{
	private:
		Expresion exp;
		Arbol *arbolSintactico;
		Automata afd;
	public:
// Extiende la expresión regular, concatenando un '#' a toda la expresión.
// También quita los paréntesis de la expresión regular, cambiandola a notación prefija
// Para facilitar la construcción del árbol sintáctico.
		void extender(void);
// Construye el árbol sintáctico. Con la expresión regular previamente extendida
// y con notación prefija.
		void construirArbol(void);
// Calcula las posiciones de los simbolos de la expresión regular.	
		void calcularPosiciones(void);
		void calcularAnulables(Arbol);
		void calcularPrimeros(Arbol);
		void calcularUltimos(Arbol);
		void llenarTablaSiguientes(Arbol);
		void crearAutomata(Arbol);
		void marcarEstados(Arbol,Automata);
		
		
// Instancia la expresión regular.
		void setExpresion(char*);
// Grafíca el árbol sintáctico. Creando un archivo con extensión ".dot".
		void dibujarArbol(void);
};

#endif
