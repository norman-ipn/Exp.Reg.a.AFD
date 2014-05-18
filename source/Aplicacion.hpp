#ifndef __APLICACION_HPP__
#define __APLICACION_HPP__

#include "Convertidor.hpp"

class Aplicacion{
	private:
		Convertidor conver;
	public:
// Inicializa la aplicación. Llamando a las clase miembro de la clase Convertidor.
		void iniciar(int,char *[]);

};

#endif
