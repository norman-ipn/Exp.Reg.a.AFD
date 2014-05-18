#include "Pila.hpp"

Pila::Pila(){
	ultimo=NULL;
};

void Pila::push(char v){
	ultimo=new Nodo(v,ultimo);
	//printf("\nSe a insertado el valor %c a la pila.",v);
};

void Pila::pop(){
	if(ultimo==NULL){
		//printf("\nError. No hay elementos en la pila.");
	}else{
		//printf("\nSe a eliminado el valor %c a la pila.",ultimo->getValor());
		ultimo=ultimo->getSiguiente();
	}
};

char Pila::top(){
	return ultimo->getValor();
};

bool Pila::esVacia(){
	if(ultimo==NULL)
		return true;
	else
		return false;
};