#ifndef __DATO_HPP__
#define __DATO_HPP__

#include <iostream>

class Dato{
	private:
// Se guardará el caractér de interés del árbol sintáctico,
// la posición de los símbolos, si es anulable o no,
// y una lista para los nodos primeros y últimos.
		char d;
		int posicion;
		bool anulable;
		int primeros[];
		int ultimos[];
	public:
// Inicializa el objeto Dato.
		Dato();
// Consulta el dato.
		char getDato();
// Almacena el valor del caractér.
		void setDato(char);
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
// Consulta los nodos siguientes.
		int* getPrimeros();
// Coloca los nodos últimos.
		void setUltimos(int);
// Consulta los nodos últimos.
		int* getUltimos();
};

#endif
