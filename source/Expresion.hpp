#ifndef __EXPRESION_HPP__
#define __EXPRESION_HPP__

#include <string>

class Expresion{
	private:
// Para almacenar la expresión regular utilizaremos la clase string.		
		std::string exp;
	public:
// Verifica si la Expresión (cadena) está vacía, devolviendo false si lo está,
// y true si contiene algún elemento.
		bool estaVacia();
// Consulta la cantidad de caracteres (tamaño) que tiene la expresión regular.		
		int tamExp();
// Consulta el caracter que se encuentra en la posición indicada de la expresión regular.
		char extraer(int);
// Concatena caracteres, cadena y cadenas a la expresión regular.
		void concatenar(char);
		void concatenar(char*);
		void concatenar(std::string,Expresion,std::string);
};

#endif
