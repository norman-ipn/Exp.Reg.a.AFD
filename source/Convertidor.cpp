#include "Convertidor.hpp"

void Convertidor::extender(){
	Expresion expExtendida;
	Pila p,o;
	char temp;
	int i;
	exp.concatenar("(",exp,").#");
	for(i=exp.tamExp()-1;i>=0;i--){
		temp=exp.extraer(i);
		switch(temp){
			case '|':
			case '+':
			case '*':
			case '.':	
			case ')':
				o.push(temp);
				break;
				
			case '(':
				while(o.top()!=')'){
					p.push(o.top());
					o.pop();
				}o.pop();
				break;
								
			default:
				p.push(temp);
				if(!o.esVacia()){
					if(o.top()=='+'||o.top()=='*'){
						p.push(o.top());
						o.pop();
					}
				}break;
		}
	}//printf("\nVaciando pila.\n");
	while(!o.esVacia()){
		p.push(o.top());
		o.pop();
	}//printf("\nVaciando pila final.\n");
	while(!p.esVacia()){
		expExtendida.concatenar(p.top());
		printf("%c",p.top());
		p.pop();
	}printf("\n");
	exp=expExtendida;
	//return expExtendida;
};

void Convertidor::construirArbol(void){
	int i;
	char temp;
	arbolSintactico=NULL;
	for(i=0;i<exp.tamExp();i++){
		temp=exp.extraer(i);
		arbolSintactico->insertar(&arbolSintactico,temp);
	}printf("\nArbol sintactico: ");
	arbolSintactico->inorden(arbolSintactico);
	printf("\n");
};

void Convertidor::calcularPosiciones(void){
	printf("\nPosiciones de los simbolos de la Expresión regular.\n");
	arbolSintactico->inordenPosiciones(arbolSintactico);
};

void Convertidor::calcularAnulables(void){
	printf("\nNodos anulables de la Expresión regular.\n");
	arbolSintactico->postordenAnulables(arbolSintactico);
};

void Convertidor::calcularPrimeros(void){
	printf("\nNodos primeros de la Expresión regular.\n");
	arbolSintactico->postordenPrimeros(arbolSintactico);
};

void Convertidor::calcularUltimos(void){
	printf("\nNodos ultimos de la Expresión regular.\n");
	arbolSintactico->postordenUltimos(arbolSintactico);
};

void Convertidor::llenarTablaSiguientes(void){};
void Convertidor::crearAutomata(void){};
void Convertidor::marcarEstados(void){};

void Convertidor::dibujarArbol(void){
	FILE *dot;
	dot = fopen ( "arbolSintactico.dot", "w" );
	fprintf(dot,"graph Arbol_sintactico {\n");
	arbolSintactico->setLabelDOTArbol(arbolSintactico,dot);
	arbolSintactico->dibujarArbol(arbolSintactico,dot);
	fprintf(dot,"}");
	fclose ( dot );
	printf("\nÁrbol sintáctico dibujado.\n");
	system("dot -Tjpg -O  arbolSintactico.dot");
	system("ristretto arbolSintactico.dot.jpg");
	return;
};


void Convertidor::setExpresion(char *e){
	exp.concatenar(e);
};