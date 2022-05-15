#ifndef ELE_A_H
#define ELE_A_H
#include "administrador.h"
class Ele_A :public administrador{
public:
	Ele_A(int num, int arr[15][11], int new_score);
	void ele_admin();
	void rotar(int state);
	void subadmin();
private:
	int pieza[2][4];
	int status;
};

#endif

