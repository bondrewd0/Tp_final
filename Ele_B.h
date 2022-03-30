#ifndef ELE_B_H
#define ELE_B_H
#include "administrador.h"
class Ele_B :virtual public administrador{
public:
	Ele_B();
	void ele_b_admin();
	void rotar(int state);
private:
	int pieza[2][4];
	int status;
};

#endif

