#include "Dato.hpp"

Dato::Dato(){
	posicion=0;
	anulable=false;
	primeros[0]=0;
	ultimos[0]=0;
};
char Dato::getDato(){
	return d;	
};

void Dato::setDato(char c){
	d=c;
};

void Dato::setPosicion(int pos){
	posicion=pos;
};

int Dato::getPosicion(){
	return posicion;
};

void Dato::setAnulable(bool a){
	anulable=a;
};

bool Dato::getAnulable(){
	return anulable;
};

void Dato::setPrimeros(int prim){
	int i;
	for(i=0;primeros[i]!=0;i++);
	primeros[i]=prim;
	primeros[i+1]=0;
};

int* Dato::getPrimeros(){
	return primeros;
};

void Dato::setUltimos(int ult){
	int i;
	for(i=0;ultimos[i]!=0;i++);
	ultimos[i]=ult;
	ultimos[i+1]=0;
};

int* Dato::getUltimos(){
	return ultimos;
};