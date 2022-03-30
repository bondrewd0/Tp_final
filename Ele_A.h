#ifndef ELE_A_H
#define ELE_A_H
#include "administrador.h"
class Ele_A :virtual public administrador{
public:
	Ele_A();
	void ele_admin();
	void rotar(int state);
private:
	int pieza[2][4];
	int status;
};

#endif

