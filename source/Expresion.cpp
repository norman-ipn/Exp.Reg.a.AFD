#include "Expresion.hpp"

bool Expresion::estaVacia(){
	if(exp.length()>0)
		return false;
	else
		return true;
};

int Expresion::tamExp(){
	return exp.length();
};

char Expresion::extraer(int i){
	//return exp.substr(i,1);
	return exp[i];
};

void Expresion::concatenar(char c){
	exp+=c;
};
void Expresion::concatenar(char *c){
	exp+=c;
};
void Expresion::concatenar(std::string s1,Expresion e,std::string s2){
	exp=s1+e.exp+s2;
};

