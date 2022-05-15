#ifndef ELE_B_H
#define ELE_B_H
#include "administrador.h"
class Ele_B : public administrador{
public:
	Ele_B(int num, int arr[15][11], int new_score);
	void ele_b_admin();
	void rotar(int state);
	void subadmin();
private:
	int pieza[2][4];
	int status;
};

#endif

