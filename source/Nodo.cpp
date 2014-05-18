#include "Nodo.hpp"

Nodo::Nodo(char v, Nodo *sig){
	valor = v;
	siguiente = sig;
};

Nodo* Nodo::getSiguiente(){
	return siguiente;
};

char Nodo::getValor(){
	return valor;
};