#ifndef __CONVERTIDOR_HPP__
#define __CONVERTIDOR_HPP__

#include "Expresion.hpp"
#include "Arbol.hpp"
#include "Automata.hpp"

class Convertidor{
	private:
		Expresion exp;
		Arbol *arbolSintactico;
		Automata afd;
	public:
		void extender(Expresion);
		void construirArbol(Expresion);
		void calculaPosiciones(Arbol);
		void calcularAnulables(Arbol);
		void calcularPrimeros(Arbol);
		void calcularUltimos(Arbol);
		void llenarTablaSiguientes(Arbol);
		void crearAutomata(Arbol);
		void marcarEstados(Arbol,Automata);
};

#endif
