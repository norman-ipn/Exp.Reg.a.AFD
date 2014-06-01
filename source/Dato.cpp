#include "Dato.hpp"

Dato::Dato(){
	posicion=0;
	anulable=false;
	primeros[0]=-1;
	ultimos[0]=-1;
};

void Dato::setId(int i){
	id=i;
};

int Dato::getId(void){
	return id;
};

void Dato::setDato(char c){
	d=c;
};

char Dato::getDato(){
	return d;	
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
	//int i;
	//for(i=0;primeros[i]!=-1;i++);
	primeros[0]=prim;
	primeros[1]=-1;
};
void Dato::setPrimeros(int *prim){
	int i;
	for(i=0;prim[i]!=-1;i++)
		primeros[i]=prim[i];
	primeros[i]=-1;
};

void Dato::setPrimeros(int *prim, int *prim2){
	int i,j;
	for(i=0;prim[i]!=-1;i++)
		primeros[i]=prim[i];
	primeros[i]=-1;
	for(j=0;prim2[j]!=-1;j++,i++){
		primeros[i]=prim2[j];
		primeros[i+1]=-1;
	}
};

int* Dato::getPrimeros(){
	return primeros;
};

void Dato::setUltimos(int ult){
	ultimos[0]=ult;
	ultimos[1]=-1;
};
void Dato::setUltimos(int *ult){
	int i;
	for(i=0;ult[i]!=-1;i++)
		ultimos[i]=ult[i];
	ultimos[i]=-1;
};

void Dato::setUltimos(int *ult, int *ult2){
	int i,j;
	for(i=0;ult[i]!=-1;i++)
		ultimos[i]=ult[i];
	ultimos[i]=-1;
	for(j=0;ult2[j]!=-1;j++,i++){
		ultimos[i]=ult2[j];
		ultimos[i+1]=-1;
	}
};

int* Dato::getUltimos(){
	return ultimos;
};