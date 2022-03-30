#ifndef SQUIGLY_H
#define SQUIGLY_H
#include "administrador.h"
class squigly: public administrador {
public:
	squigly();
	int admin_sq();
	void rotar_squi(int state);
	void metodo_cajon(int x, int y, int a);
private:
	
	int pieza[3][3];
};

#endif

