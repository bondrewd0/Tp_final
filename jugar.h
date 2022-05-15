#ifndef JUGAR_H
#define JUGAR_H
#include "squigly.h"
#include "squigly_inverso.h"
#include "Te.h"
#include "Stick.h"
#include "cube.h"
#include "Ele_A.h"
#include "Ele_B.h"
#include "administrador.h"
class jugar {
public:
	jugar();
	void play();
	void cambiar();
	void copiar_tabla();

private:
	int tabla_temporal[15][11];
	int temporal;
	bool game;
	int score_temp;
administrador* adm;
	
	clock_t tempo; 
	clock_t paso; 
	int velocidad;
	int tiempo2;
};

#endif

