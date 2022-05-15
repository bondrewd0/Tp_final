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
    virtual void subadmin(){};
	void revisar_tetris();
	void transformar(int x, int y);
	void prerotacion();
	void bajar(int x);
	 int control();
	 void interfaz(int score);
	virtual void mano(){};
	void reimprimir_mat(int arr[15][11]);
    int devolver_tabla(int x, int y);
	bool check_game_over();
	int send_score();
protected:
	int puntaje;
	int alerta;
	int status;
	int tabla[15][11];
	bool freno;
	int tecla;
	int admin;


private:
	
	
	bool play;
};

#endif

