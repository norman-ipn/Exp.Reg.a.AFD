#ifndef __EXPRESION_HPP__
#define __EXPRESION_HPP__

/*
	Titulo: Algoritmo árbol de expr. regular
	Autores: Romero Gutiérrez Miguel Angel
	Descripcion: A partir de una expresión regular se construye un árbol de analisís, los pasos para construir el árbol son:
	1.- Concatenar al final de la expresión nuestro carácter comodín (#)
	2.- Crear la raíz del árbol con el símbolo de concatenación, el hijo derecho será el carácter comodín y el izquierdo la expresión 
	regular inicial.
	3.- Recorrer el árbol empezando por la izquierda hasta llegar a la primer hoja que se encuentre con una expresión regular. 
	4.- Colocar el operdador de mayor precedencia en la hoja actual y separar la expresión entre sus dos hijos de acuerdo al operador.
	5.- Repetir el tercer punto si existe alguna hoja que sea expresión regular.
*/

class Expresion
{
/*
	Metodos:
	1.- Buscar operador mas alto y devuelve su posición en la cadena
		int buscaOper();
	2.- Tomar una subcadena de la expresión regular, de una posición a otra
		char* subcad(int posIni, int posFin)
	3.- Metodos getter y setter.
	Atributos
	1.- Cadena de caracteres de la expresion regular
		char* expresion
	2.- Longitud de cadena
		int largo
*/
public:
	Expresion(arguments);
	~Expresion();
private:
protected:
	/* data */
};
#endif
