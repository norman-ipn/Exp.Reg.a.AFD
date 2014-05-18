#ifndef __NODO_HPP__
#define __NODO_HPP__

class Nodo {
	private:
// Cada nodo contendrá un campo para guardar el caracter de interés, 
// y un campo para guardar la posición del siguiente nodo.
		char valor;
		Nodo *siguiente;
	public:
// Inicializa el nodo. Asignandole el caractér a guardar, 
// así como la posición del siguiente nodo.
		Nodo(char,Nodo*);
// Regresa el apuntador del nodo siguiente.
		Nodo* getSiguiente();
// Consulta el valor del nodo.
		char getValor();
};
 
#endif
