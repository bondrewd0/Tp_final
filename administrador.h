#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
#include <iostream>
#include <ctime>
#include <conio2.h>
using namespace std;
class administrador {
public:
	administrador();
	void iniciador(int x, int y, int valor);
	void modificar(int x, int y);
	 void mostrar();
	int keypress();
	void mover_ficha(int recibo);

	void revisar_tetris();
	void transformar(int x, int y);
	void prerotacion();
	void bajar(int x);
	bool control();
	void interfaz();
protected:
	int status;
	int tabla[15][11];
	bool freno;
	int tecla;
	int admin;
	int puntaje;

private:
	
	
	bool play;
};

#endif

