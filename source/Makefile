sal:main

main: Aplicacion.o Arbol.o Automata.o Convertidor.o Dato.o Estado.o Expresion.o Nodo.o Pila.o Simbolo.o Transicion.o main.o
	g++ Aplicacion.o Arbol.o Automata.o Convertidor.o Dato.o Estado.o Expresion.o Nodo.o Pila.o Simbolo.o Transicion.o main.o -o main

Aplicacion.o:Aplicacion.cpp
			g++ -c Aplicacion.cpp	

Arbol.o:Arbol.cpp
			g++ -c Arbol.cpp	
			
Automata.o:Automata.cpp
			g++ -c Automata.cpp

Convertidor.o:Convertidor.cpp
			g++ -c Convertidor.cpp	

Dato.o:Dato.cpp
			g++ -c Dato.cpp	
			
Estado.o:Estado.cpp
			g++ -c Estado.cpp

Expresion.o:Expresion.cpp
			g++ -c Expresion.cpp	

Nodo.o:Nodo.cpp
			g++ -c Nodo.cpp							

Pila.o:Pila.cpp
			g++ -c Pila.cpp	
			
Simbolo.o:Simbolo.cpp
			g++ -c Simbolo.cpp
			
Transicion.o: Transicion.cpp
			g++ -c Transicion.cpp
			
main.o: main.cpp
			g++ -c main.cpp

afd:
	dot -Tpng automata.dot > automata.png
	eog automata.png

clean:rm -rf *o main
