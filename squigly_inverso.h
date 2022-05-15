#ifndef SQUIGLY_INVERSO_H
#define SQUIGLY_INVERSO_H
#include "administrador.h"
class squigly_inverso : public administrador{
public:
	squigly_inverso(int num, int arr[15][11], int new_score);
	int admin_sq_inv();
	void subadmin();
	void rotar(int state);
private:
	int pieza[3][3];
};

#endif

