#ifndef __ARBOL_HPP__
#define __ARBOL_HPP__
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

class Arbol
{
/*
	Clase arbol contendrá los siguientes metodos:
	1.- Inserción de nodos u hojas. 
		bool insertaHojaD(apHoja* hojaNueva); 
		bool insertaHojaI(apHoja* hojaNueva);
	2.- Eliminación de nodos u hojas. 
		bool eliminaHoja(apHoja* hoja)
	3.- Recorrer árbol.
		apHoja* hijoDerecho();
		apHoja* hojoIzquierdo();
	4.- Métodos getter y setter.
	Sus Atributos serán:
	1.- Raíz del árbol
		apHoja* raiz
	2.- Hoja actual sobre la que se trabaja.
		apHoja* hojaActual
*/
public:
	Arbol(arguments);
	~Arbol();
private:
protected:
};
#endif
