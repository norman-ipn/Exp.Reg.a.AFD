#ifndef __DATO_HPP__
#define __DATO_HPP__

#include <iostream>

class Dato{
	private:
// Se guardará el caractér de interés del árbol sintáctico.
		char d;
	public:
// Consulta el dato.
		char getDato();
// Almacena el valor del caractér.
		void setDato(char);
};

#endif
