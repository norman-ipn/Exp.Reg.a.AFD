#include "Arbol.hpp"

Arbol::Arbol(){
	hojaIzquierda=NULL;
	hojaDerecha=NULL;
};

bool Arbol::insertar(Arbol **a,char x){
	//printf("%c",x);
	
	if(*a!=NULL){
		if((*a)->getDato()=='+'||(*a)->getDato()=='*'||
			(*a)->getDato()=='.'||(*a)->getDato()=='|'){
			if(insertar(&((*a)->hojaIzquierda),x)==true)
				return true;
			if((*a)->getDato()=='.'||(*a)->getDato()=='|')
				insertar(&((*a)->hojaDerecha),x);
		}
    }else{
		(*a)=new Arbol();
		(*a)->hojaIzquierda=NULL;
		(*a)->setDato(x);
		(*a)->hojaDerecha=NULL;
		//printf("\nSe insertó el elemento %c correctamente.",(*a)->getDato());
		return true;
	}
	
	
	
	
/*	
// 	if(*a==NULL){
// 		(*a)=new Arbol();
// 		(*a)->hojaIzquierda=NULL;
// 		(*a)->setDato(x);
// 		(*a)->hojaDerecha=NULL;
// 		printf("\nSe insertó el elemento %c correctamente.",x);
// 		return;
// 	}else{
// 		if( (*a)->getDato()!='.'||(*a)->getDato()!='|'||
// 			(*a)->getDato()!='+'||(*a)->getDato()!='*'){
// 			//insertar(&((*a)->hojaIzquierda),x);
// 			return;
// 		}else{//((*a)->getDato()=='+'||(*a)->getDato()=='*')||(*a)->getDato()=='.'||(*a)->getDato()=='|')){
// 			insertar(&((*a)->hojaIzquierda),x);
// 			return;
// 		}
// 		insertar(&((*a)->hojaDerecha),x);
// 	}
*/
};

void Arbol::inorden(Arbol *a){
	if(a!=NULL){
		inorden(a->hojaIzquierda);
		printf("%c ",a->getDato());
		inorden(a->hojaDerecha);
    }
};

void Arbol::inorden(Arbol *a,FILE* dot){

	if(a!=NULL){
//		fprintf(dot,"\"%c\" -> \"%c\";\n",a->getDato(),a->hojaIzquierda->getDato());
//		fprintf(dot,"\"%c\" -> \"%c\";\n",a->getDato(),a->hojaDerecha->getDato());
// 		fprintf(dot,"\"%c\" -> ;\n",a->getDato());
		fprintf(dot,"\"%c\" -> ",a->getDato());
		inorden(a->hojaIzquierda,dot);
		fprintf(dot,"\"%c\";\n",a->getDato());
		fprintf(dot,"\"%c\" -> ",a->getDato());
		inorden(a->hojaDerecha,dot);
		fprintf(dot,"\"%c\";\n",a->getDato());
    }
};

void Arbol::inordenPosiciones(Arbol *a){
	if(a!=NULL){
		inordenPosiciones(a->hojaIzquierda);
		if( a->getDato()!='+'&&a->getDato()!='*'&&
			a->getDato()!='.'&&a->getDato()!='|'){
			a->setPosicion(countInordenPosicion);
			printf("%c pos: %i\n",a->getDato(),a->getPosicion());
			countInordenPosicion++;
		}
		inordenPosiciones(a->hojaDerecha);
    }
};

void Arbol::postordenAnulables(Arbol *a){
	if(a!=NULL){
		postordenAnulables(a->hojaIzquierda);
		postordenAnulables(a->hojaDerecha);
		switch(a->getDato()){
			case '.':
				if(a->hojaIzquierda->getAnulable()&&a->hojaDerecha->getAnulable())
					a->setAnulable(true);
				else
					a->setAnulable(false);
				break;
				
			case '|':
				if(a->hojaIzquierda->getAnulable()||a->hojaDerecha->getAnulable())
					a->setAnulable(true);
				else
					a->setAnulable(false);
				break;
				
			case '+':
				if(a->hojaIzquierda->getAnulable())
					a->setAnulable(true);
				else
					a->setAnulable(false);
				break;
				
			case '*':
			case 'e':
				a->setAnulable(true);
				break;
				
			default:
				a->setAnulable(false);
				break;
				
		}if(a->getAnulable())
			printf("%c Es anulable: Verdadero.\n",a->getDato());
		else
			printf("%c Es anulable: Falso.\n",a->getDato());
    }
};

void Arbol::postordenPrimeros(Arbol *a){
	int i;
	if(a!=NULL){
		postordenPrimeros(a->hojaIzquierda);
		postordenPrimeros(a->hojaDerecha);
		switch(a->getDato()){
			case '.':
				if(a->hojaIzquierda->getAnulable())
					a->setPrimeros(a->hojaIzquierda->getPrimeros(),a->hojaDerecha->getPrimeros());
				else
					a->setPrimeros(a->hojaIzquierda->getPrimeros());
				break;
				
			case '|':
					a->setPrimeros(a->hojaIzquierda->getPrimeros(),a->hojaDerecha->getPrimeros());
				break;
				
			case '+':
			case '*':
				a->setPrimeros(a->hojaIzquierda->getPrimeros());
				break;
				
			default:
				a->setPrimeros(a->getPosicion());
				break;
				
		}printf("%c Primeros: ",a->getDato());
		for(i=0;a->getPrimeros()[i]!=-1;i++){
			printf("%i ",a->getPrimeros()[i]);
		}printf("\n");
    }
};

void Arbol::postordenUltimos(Arbol *a){
	int i;
	if(a!=NULL){
		postordenUltimos(a->hojaIzquierda);
		postordenUltimos(a->hojaDerecha);
		switch(a->getDato()){
			case '.':
				if(a->hojaDerecha->getAnulable())
					a->setUltimos(a->hojaDerecha->getUltimos(),a->hojaIzquierda->getUltimos());
				else
					a->setUltimos(a->hojaDerecha->getUltimos());
				break;
				
			case '|':
					a->setUltimos(a->hojaDerecha->getUltimos(),a->hojaIzquierda->getUltimos());
				break;
				
			case '+':
			case '*':
				a->setUltimos(a->hojaIzquierda->getUltimos());
				break;
				
			default:
				a->setUltimos(a->getPosicion());
				break;
				
		}printf("%c Ultimos: ",a->getDato());
		for(i=0;a->getUltimos()[i]!=-1;i++){
			printf("%i ",a->getUltimos()[i]);
		}printf("\n");
    }
};

void Arbol::setDato(char c){
	d.setDato(c);
};

char Arbol::getDato(void){
	return d.getDato();
};

void Arbol::setPosicion(int pos){
	d.setPosicion(pos);
};

int Arbol::getPosicion(){
	return d.getPosicion();
};

void Arbol::setAnulable(bool a){
	d.setAnulable(a);
};

bool Arbol::getAnulable(){
	return d.getAnulable();
};

void Arbol::setPrimeros(int prim){
	d.setPrimeros(prim);
};

void Arbol::setPrimeros(int *prim){
	d.setPrimeros(prim);
};

void Arbol::setPrimeros(int *prim, int *prim2){
	d.setPrimeros(prim, prim2);
};

int* Arbol::getPrimeros(){
	return d.getPrimeros();
};

void Arbol::setUltimos(int ult){
	d.setUltimos(ult);
};

void Arbol::setUltimos(int *ult){
	d.setUltimos(ult);
};

void Arbol::setUltimos(int *ult,int *ult2){
	d.setUltimos(ult,ult2);
};

int* Arbol::getUltimos(){
	return d.getUltimos();
};