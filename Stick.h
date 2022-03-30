#ifndef STICK_H
#define STICK_H
#include "administrador.h"
class Stick :virtual public administrador{
public:
	Stick();
	void stick_admin();
	void rotar(int state);
private:
		int pieza[4][1];
		int status;
};

#endif

