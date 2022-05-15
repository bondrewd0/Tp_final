#ifndef SQUIGLY_H
#define SQUIGLY_H
#include "administrador.h"

class squigly: public administrador {
public:
	squigly(int num,int arr[15][11], int new_score);
	int admin_sq();
	void rotar_squi(int state);
	void subadmin();
private:
	
	int pieza[3][3];
};

#endif

