#include "Aplicacion.hpp"

void Aplicacion::iniciar(int argc, char *argv[]){
	if(argc==2){
		Convertidor c;
		printf("\nExpresion a convertir: %s\n",argv[1]);
		c.setExpresion(argv[1]);

		c.extender();
		c.construirArbol();
		c.dibujarArbol();
		c.calcularPosiciones();
		c.calcularAnulables();
		c.calcularPrimeros();
		c.calcularUltimos();
		c.llenarTablaSiguientes();
		c.crearAutomata();
		c.marcarEstados();
		c.dibujarAutomata();
		
	}else
		std::cout << "Error de entrada."<<std::endl;

};
