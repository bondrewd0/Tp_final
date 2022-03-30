#ifndef SQUIGLY_INVERSO_H
#define SQUIGLY_INVERSO_H
#include "administrador.h"
class squigly_inverso :virtual public administrador{
public:
	squigly_inverso();
	int admin_sq_inv();
	void rotar(int state);
private:
	int pieza[3][3];
};

#endif

